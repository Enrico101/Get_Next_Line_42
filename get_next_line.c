/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line02.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/29 13:09:39 by enradcli          #+#    #+#             */
/*   Updated: 2019/07/15 10:42:20 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		look_l(char *str_b)
{
	int x;

	x = 0;
	while (str_b[x] && str_b[x] != '\n')
		x++;
	if (str_b[x] == '\n')
		return (1);
	return (0);
}

int		acc_line(const int fd, char *str_b, char *str_ptr[fd])
{
	int			read_r;
	char		*str_t;

	while ((look_l(str_b) != 1) && ((read_r = read(fd, str_b, BUFF_SIZE)) > 0))
	{
		str_b[read_r] = '\0';
		str_t = str_ptr[fd];
		str_ptr[fd] = ft_strjoin(str_t, str_b);
		ft_strdel(&str_t);
	}
	ft_strdel(&str_b);
	if (read_r < 0)
		return (-1);
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int			r;
	char		*str_t;
	static char *str_ptr[2147483647];
	char		*str_b;
	char		*str;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	str_b = ft_strnew(BUFF_SIZE);
	if (!str_ptr[fd])
		str_ptr[fd] = ft_strnew(0);
	if ((r = acc_line(fd, str_b, str_ptr)) == -1)
		return (-1);
	if ((str = ft_strchr(str_ptr[fd], '\n')))
	{
		*line = ft_strsub(str_ptr[fd], 0, str - str_ptr[fd]);
		str_t = str_ptr[fd];
		str_ptr[fd] = ft_strdup(str + 1);
		ft_strdel(&str_t);
		return (1);
	}
	*line = ft_strdup(str_ptr[fd]);
	ft_strdel(&str_ptr[fd]);
	return (ft_strlen(*line) > 0 ? 1 : 0);
}

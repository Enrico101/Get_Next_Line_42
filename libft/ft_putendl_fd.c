/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:47:08 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/17 10:47:28 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	int x;

	if (s)
	{
		x = 0;
		while (s[x])
		{
			write(fd, &s[x], 1);
			x++;
		}
		write(fd, "\n", 1);
	}
}

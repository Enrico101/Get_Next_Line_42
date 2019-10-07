/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:42:17 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/17 10:42:19 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == (unsigned char)c)
			return ((char *)&s[x]);
		x++;
	}
	if (s[x] == (unsigned char)c)
		return ((char *)&s[x]);
	return (0);
}

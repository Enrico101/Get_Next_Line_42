/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:30:31 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/21 08:36:39 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*str;
	unsigned char	ltr;

	x = 0;
	str = (unsigned char *)s;
	ltr = (unsigned char)c;
	while (x < n)
	{
		if (str[x] == ltr)
			return ((unsigned char *)&str[x]);
		x++;
	}
	return (0);
}

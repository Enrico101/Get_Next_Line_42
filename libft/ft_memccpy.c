/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:54:14 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/21 08:35:59 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			x;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	x = 0;
	while (x < n)
	{
		str1[x] = str2[x];
		if (str2[x] == (unsigned char)c)
			return (str1 + 1 + x);
		x++;
	}
	return (0);
}

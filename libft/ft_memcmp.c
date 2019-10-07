/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:41:02 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/21 08:36:27 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			x;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	x = 0;
	if (str1 == str2)
		return (0);
	while (x < n)
	{
		if (str1[x] > str2[x])
			return (str1[x] - str2[x]);
		if (str1[x] < str2[x])
			return (str1[x] - str2[x]);
		x++;
	}
	return (0);
}

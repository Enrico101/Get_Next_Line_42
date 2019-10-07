/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 08:44:03 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/17 10:58:34 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int				x;
	size_t			lens1;
	size_t			lens2;
	unsigned char	*s1;
	unsigned char	*s2;

	lens1 = ft_strlen((char *)str1);
	lens2 = ft_strlen((char *)str2);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	x = 0;
	while (s1[x] && (lens1 > lens2 || lens1 == lens2))
	{
		if (s1[x] > s2[x] || s1[x] < s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	while (s2[x] && (lens1 < lens2 || lens1 == lens2))
	{
		if (s1[x] > s2[x] || s1[x] < s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (0);
}

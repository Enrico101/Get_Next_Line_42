/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:50:28 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/17 10:50:29 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*str1;
	char	*str2;
	int		x;

	str1 = (char *)dst;
	str2 = (char *)src;
	x = 0;
	while (str2[x] != '\0')
	{
		str1[x] = str2[x];
		x++;
	}
	str1[x] = '\0';
	return (str1);
}

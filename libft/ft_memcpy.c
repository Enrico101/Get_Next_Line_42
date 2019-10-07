/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:58:30 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/21 08:36:56 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	x;
	char	*str1;
	char	*str2;

	x = 0;
	str1 = (char *)dst;
	str2 = (char *)src;
	if (dst == '\0' && src == '\0')
		return (NULL);
	while (x < n)
	{
		str1[x] = str2[x];
		x++;
	}
	return (dst);
}

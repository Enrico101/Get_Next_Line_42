/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:57:31 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/17 11:47:40 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t x;

	x = 0;
	while (x < len && src[x])
	{
		dst[x] = src[x];
		x++;
	}
	while (x < len && dst[x] != '\0')
	{
		dst[x] = '\0';
		x++;
	}
	return (dst);
}

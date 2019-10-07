/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:06:19 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/21 08:37:34 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				x;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	x = 0;
	if (ptr == '\0' && ptr2 == '\0')
		return (NULL);
	if (ptr2 < ptr)
		while (++x <= len)
			ptr[len - x] = ptr2[len - x];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dst);
}

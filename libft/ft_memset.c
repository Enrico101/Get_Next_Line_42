/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:55:53 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/21 15:42:20 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			x;
	char			*str;
	unsigned char	ltr;

	x = 0;
	str = (char *)b;
	ltr = (unsigned char)c;
	while (x < len)
	{
		str[x] = ltr;
		x++;
	}
	return (str);
}

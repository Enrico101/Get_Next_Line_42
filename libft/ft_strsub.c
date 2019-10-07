/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:21:50 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/17 10:57:57 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	x;
	char	*sub;

	if (s)
	{
		sub = (char *)malloc((len + 1) * sizeof(char));
		if (sub == NULL)
			return (NULL);
		x = 0;
		while (x < len)
		{
			sub[x] = s[start];
			x++;
			start++;
		}
		sub[x] = '\0';
		return (sub);
	}
	return (0);
}

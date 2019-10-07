/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 13:47:24 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/19 08:21:35 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char	const *s, char c)
{
	size_t	x;
	size_t	y;
	size_t	z;
	char	**w;

	x = 0;
	z = 0;
	if (!s ||
			!(w = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (x < ft_countwords(s, c))
	{
		if (!
			(w[x] = (char *)malloc(sizeof(char) * (ft_countlen(&s[z], c) + 1))))
			return (NULL);
		y = 0;
		while (s[z] == c)
			z += 1;
		while (s[z] != c && s[z])
			w[x][y++] = s[z++];
		w[x][y] = '\0';
		x += 1;
	}
	w[x] = NULL;
	return (w);
}

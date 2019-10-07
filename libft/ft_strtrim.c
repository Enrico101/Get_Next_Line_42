/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:52:13 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/17 10:52:18 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen((char *)s) - 1;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == 32)
		i++;
	if (s[i] == '\0')
		return (ft_strdup(s + i));
	while ((s[j] == '\n' || s[j] == '\t' || s[j] == 32) && j > 0)
		j--;
	return (ft_strsub(s, i, j - i + 1));
}

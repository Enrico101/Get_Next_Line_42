/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:42:44 by enradcli          #+#    #+#             */
/*   Updated: 2019/07/15 09:45:35 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fresh;
	size_t	lens1;
	size_t	lens2;
	size_t	tlen;

	if (s1 && s2)
	{
		lens1 = ft_strlen((char *)s1);
		lens2 = ft_strlen((char *)s2);
		tlen = lens1 + lens2;
		fresh = (char *)malloc(tlen + 1 * sizeof(char));
		if (fresh == NULL)
			return (NULL);
		else
		{
			ft_memset(fresh, '\0', tlen + 1);
		}
		ft_strcpy(fresh, s1);
		ft_strcat(fresh, s2);
		return (fresh);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:50:58 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/21 15:06:59 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		x;
	size_t	len;
	char	*fresh;
	char	*str;

	x = 0;
	str = (char *)s;
	if (str)
	{
		len = ft_strlen(str);
		fresh = (char *)malloc(len + 1 * sizeof(char));
		if (fresh == NULL)
			return (NULL);
		while (str[x])
		{
			fresh[x] = (*f)(x, str[x]);
			x++;
		}
		fresh[x] = '\0';
		return (fresh);
	}
	return (0);
}

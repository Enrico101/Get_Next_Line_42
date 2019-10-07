/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 10:53:07 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/21 10:08:51 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *fresh;

	fresh = (char *)malloc(size + 1 * sizeof(char));
	if (fresh == NULL)
		return (NULL);
	else
	{
		ft_memset(fresh, '\0', size + 1);
		return (fresh);
	}
}

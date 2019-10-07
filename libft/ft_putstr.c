/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:53:21 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/17 10:53:24 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int x;

	if (s)
	{
		x = 0;
		while (s[x])
		{
			write(1, &s[x], 1);
			x++;
		}
	}
}

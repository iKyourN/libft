/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/25 14:05:43 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/07 19:47:49 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_ltoa_base(long nbr, char *base_to)
{
	long	a;
	long	n;
	long	b;
	long	c;
	char	*final;

	a = ft_strlen(base_to);
	c = 0;
	b = nbr;
	while (b)
	{
		c++;
		b /= a;
	}
	final = (char *)malloc(c + 1);
	b = c;
	while (c + 1 > 0)
	{
		n = (nbr % a);
		final[c-- - 1] = base_to[n];
		nbr /= a;
	}
	final[b] = '\0';
	return (final);
}

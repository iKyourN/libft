/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 12:41:57 by yberramd          #+#    #+#             */
/*   Updated: 2018/11/17 22:52:09 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n, int neg)
{
	int i;

	i = 0;
	if (n == 0)
		i = 2;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	if (neg == 0)
		i--;
	return (i);
}

static void	ft_nbr(char *nbr, int neg, int len, int n)
{
	int i;

	i = 0;
	if (n == 0)
		len--;
	if (neg == 1 || neg == 2)
	{
		nbr[i] = '-';
		i++;
	}
	if (neg == 2)
	{
		nbr[i] = '2';
		i++;
	}
	nbr[len + 1] = '\0';
	while (n > 0)
	{
		nbr[len] = (n % 10) + 48;
		len--;
		n = n / 10;
	}
	if (neg == 0)
		nbr[len] = (n % 10) + 48;
}

char		*ft_itoa(int n)
{
	char	*nbr;
	int		neg;
	int		len;
	int		int_max;

	neg = 0;
	int_max = 0;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			n = n + 2000000000;
			neg++;
			int_max++;
		}
		n = -n;
		neg++;
	}
	len = ft_len(n, neg) + int_max;
	if (!(nbr = (char*)malloc(sizeof(char) * (len + neg) + 1)))
		return (NULL);
	ft_nbr(nbr, neg, len, n);
	return (nbr);
}

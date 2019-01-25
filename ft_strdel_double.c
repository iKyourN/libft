/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 09:21:35 by yberramd          #+#    #+#             */
/*   Updated: 2019/01/25 11:05:40 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	ft_strdel_double(char ***tab, int y)
{
	int i;

	i = 0;
	while (i < y)
	{
		ft_strdel(&(*tab)[i]);
		i++;
	}
	free(*tab);
}

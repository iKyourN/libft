/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_double.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 09:21:35 by yberramd          #+#    #+#             */
/*   Updated: 2019/05/07 19:06:15 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	ft_strdel_double(char ***tab)
{
	int i;

	i = 0;
	while ((*tab)[i] != NULL)
		ft_strdel(&(*tab)[i++]);
	free(*tab);
}

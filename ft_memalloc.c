/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 15:34:07 by yberramd          #+#    #+#             */
/*   Updated: 2018/11/11 16:31:10 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memoire;

	if (!(memoire = (void*)malloc(sizeof(void*) * size)))
		return (NULL);
	ft_bzero(memoire, size);
	return (memoire);
}

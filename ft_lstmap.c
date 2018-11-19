/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:53:27 by yberramd          #+#    #+#             */
/*   Updated: 2018/11/16 16:22:42 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *svg;

	new = f(lst);
	svg = new;
	while (lst->next != NULL)
	{
		lst = lst->next;
		new->next = f(lst);
		new = new->next;
	}
	return (svg);
}

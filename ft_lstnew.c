/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 19:01:37 by yberramd          #+#    #+#             */
/*   Updated: 2018/11/17 23:44:33 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*list;

	if (!(list = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if ((char*)content == NULL)
	{
		list->content = NULL;
		list->content_size = 0;
		list->next = NULL;
	}
	else
	{
		list->content = ft_strdup(content);
		list->content_size = content_size;
		list->next = NULL;
	}
	return (list);
}

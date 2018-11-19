/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 15:00:45 by yberramd          #+#    #+#             */
/*   Updated: 2018/11/12 17:05:17 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = NULL;
	if (!(s2 = (char*)malloc(ft_strlen(s1) * sizeof(char) + 1)))
		return (NULL);
	s2 = ft_strcpy(s2, s1);
	return (s2);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 13:27:20 by yberramd          #+#    #+#             */
/*   Updated: 2018/12/03 13:46:33 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strjoin_free(char **line, char *buffer)
{
	char	*tmp;

	if (!buffer && !line)
		return (-1);
	if (!(tmp = ft_strjoin(*line, buffer)))
		return (-1);
	ft_strdel(line);
	if (!(*line = ft_strdup(tmp)))
		return (-1);
	ft_strdel(&tmp);
	return (1);
}

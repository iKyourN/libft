/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:58:29 by yberramd          #+#    #+#             */
/*   Updated: 2019/06/02 19:02:26 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		split(char **tab_s, char c, char const *s, int nbr_w)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (j <= nbr_w)
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			i++;
			len++;
		}
		if ((tab_s[j] = ft_strsub(s, i - len, len)) == NULL)
			return (-1);
		j++;
	}
	return (1);
}

char			**ft_strsplit(char const *s, char c)
{
	int		nbr_w;
	char	**tab_s;

	if (s == NULL)
		return (NULL);
	nbr_w = ft_nbr_w(s, c);
	if (!(tab_s = (char**)malloc(sizeof(char*) * (nbr_w + 1))))
		return (NULL);
	tab_s[nbr_w--] = NULL;
	if (split(tab_s, c, s, nbr_w) == -1)
		return (NULL);
	return (tab_s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yberramd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 17:03:03 by yberramd          #+#    #+#             */
/*   Updated: 2019/07/18 18:59:01 by yberramd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>
#include "libft.h"
#define BUFF_SIZE 1

static int	newline(char buffer[OPEN_MAX][BUFF_SIZE + 1], int fd, char **line,
		char *tmp)
{
	int			index;

	if ((index = ft_strchr_i(tmp, '\n')) != -1)
	{
		buffer[fd][index] = '\0';
		if (ft_strjoin_free(line, tmp, 1) == -1)
		{
			ft_strdel(line);
			ft_strdel(&tmp);
			return (-1);
		}
		ft_strncpy(tmp, &buffer[fd][index + 1], BUFF_SIZE);
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char	buffer[OPEN_MAX][BUFF_SIZE + 1];
	char		*tmp;
	int			ret;
	int			result;

	if (fd < 0 || line == NULL || BUFF_SIZE < 1 || read(fd, buffer[fd], 0) < 0)
		return (-1);
	*line = ft_strnew(0);
	tmp = buffer[fd];
	while (1)
	{
		result = read(fd, tmp, BUFF_SIZE);
		tmp[result] = '\0';
		if (result == 0)
			return ((**line != 0) ? 1 : 0);
		if ((ret = newline(buffer, fd, line, tmp)) != 0)
			return (ret);
		if (ft_strjoin_free(line, tmp, 1) == -1)
		{
			ft_strdel(line);
			ft_strdel(&tmp);
			return (-1);
		}
	}
}

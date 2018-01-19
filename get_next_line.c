/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 11:15:13 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/30 11:10:39 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	ft_read_check(int fd, char *t[])
{
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	int			res;

	res = 1;
	ft_bzero(buff, BUFF_SIZE);
	while (!(ft_strchr(t[fd], '\n')) && (res = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[res] = '\0';
		tmp = t[fd];
		if (!(t[fd] = ft_strjoin(t[fd], buff)))
			return (-1);
		ft_strdel(&tmp);
	}
	return (res);
}

int			get_next_line(const int fd, char **line)
{
	static char	*save[OPEN_MAX + 1];
	char		*tmp;
	int			res;

	if (line == NULL || fd < 0 || fd > OPEN_MAX)
		return (-1);
	if (save[fd] == NULL && (save[fd] = ft_strnew(0)) == NULL)
		return (-1);
	if ((res = ft_read_check(fd, save)) == -1)
		return (-1);
	if (res == 0)
	{
		if (!(*line = ft_strdup(save[fd])))
			return (-1);
		ft_strdel(save + fd);
		return (!!(*line));
	}
	if (!(*line = ft_strsub(save[fd], 0, ft_strchr(save[fd], '\n') - save[fd])))
		return (-1);
	tmp = save[fd];
	if (!(save[fd] = ft_strdup(ft_strchr(save[fd], '\n') + 1)))
		return (-1);
	ft_strdel(&tmp);
	return (1);
}

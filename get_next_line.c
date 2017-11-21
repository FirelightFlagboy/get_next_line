/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:49:35 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/21 14:57:07 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		get_next_line(const int fd, char **line)
{
	char	*buff;
	int		i;
	int		st;

	if (!(buff = (char*)malloc(BUFF_SIZE * sizeof(char))))
		return (-1);
	while ((res = read(fd, buff, BUFF_SIZE)) > 0)
	{

	}
	free(res);
	return ((res > 0) ? 1 : res);
}

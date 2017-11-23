/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:58:42 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/14 16:46:53 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read_file(int fd)
{
	char	*inp;
	char	*res;
	char	*tmp;
	int		st;
	size_t	buff_size;

	buff_size = 10;
	if (!(inp = ft_strnew(buff_size)))
		return (NULL);
	if (!(res = ft_strnew(1)))
		return (NULL);
	while ((st = read(fd, inp, buff_size)) > 0)
	{
		if (!(res = ft_realloc_str(&res, ft_strlen(inp))))
			return (NULL);
		ft_strcat(res, inp);
		tmp = inp;
		buff_size *= 10;
		if (!(inp = ft_strnew(buff_size)))
			return (NULL);
		free(tmp);
	}
	if (st == -1)
		return (NULL);
	return (res);
}

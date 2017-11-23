/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:49:35 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/23 12:06:40 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_super_cat(char **astr, char *to_add)
{
	size_t	len_str;
	size_t	len_add;
	char	*str;
	char	*res;
	char	*dup;

	if (!astr)
		return (NULL);
	str = *astr;
	len_str = ft_strlen(str)
	len_add = ft_strlen(to_add);
	if (!(res = ft_strnew(str + to_add))
		return (NULL);
	dup = res;
	while (*str)
		*dup++ = *str++;
	if (!to_add)
		return (res);
	while (*to_add)
		*du++ = *to_add++;
	return (res);
}

int		get_next_line(const int fd, char **line)
{
	static	char	*tab[OPEN_MAX + 1];
	char			buff[BUFF_SIZE + 1];
	char			*tmp;
	int				i;
	int				st;

	ft_strclr(buff);
	if (!(tab[fd] = ft_strnew(BUFF_SIZE)))
		return (-1);
	while ((st = read(fd, buff, BUFF_SIZE)) > 0)
	{
		if (ft_strchr(buff, '\n'))
		{
			//TODO
			//il a trouver un '\n'
			break;
		}
		ft_strclr(buff);
	}
	return ((st > 0) ? 1 : st);
}

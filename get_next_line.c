/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:49:35 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/23 13:57:30 by fbenneto         ###   ########.fr       */
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
	len_str = ft_strlen(str);
	len_add = ft_strlen(to_add);
	if (!(res = ft_strnew(len_str + len_add)))
		return (NULL);
	dup = res;
	while (*str)
		*dup++ = *str++;
	if (!to_add)
		return (res);
	while (*to_add)
		*dup++ = *to_add++;
	free(str);
	astr = 0;
	return (res);
}

int		get_next_line(const int fd, char **line)
{
	static char	*tab[OPEN_MAX + 1];
	char		buff[BUFF_SIZE + 1];
	char		*s;
	char		*t;
	int			st;

	if (!(s = ft_strnew(0)))
		return (-1);
	if (!(tab[fd] = ft_strnew(BUFF_SIZE)))
		return (-1);
	while ((st = read(fd, buff, BUFF_SIZE)) > 0)
	{
		s = ft_super_cat(&s, buff);
		if (ft_strchr(buff, '\n'))//TODO
			break;
		ft_strclr(buff);
	}
	if (st < 0)
		return (-1);
	tab[fd] = ft_strdup(buff);
	if (!(*line = ft_strnew(((t = ft_strchr(s, '\n'))) ? t - s : ft_strlen(s))))//taille de la chaine a cp entre deux '\n'
		return (-1);
	ft_strncpy(*line, s, (t) ? t - s : ft_strlen(s));
	free(s);
	return ((st > 0) ? 1 : st);
}

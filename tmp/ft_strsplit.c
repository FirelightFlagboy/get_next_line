/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:19:26 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/16 11:38:37 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t		ft_count_word_c(char const *str, char c)
{
	size_t	count;
	int		in_w;

	in_w = 0;
	count = 0;
	while (*str)
	{
		if (!in_w && *str != c)
		{
			in_w = 1;
			count++;
		}
		else
			in_w = (*str != c) ? in_w : 0;
		str++;
	}
	return (count);
}

static char const	*ft_strlcpy(char *d, char const *src, size_t size, char c)
{
	size_t i;

	i = 0;
	while (*src == c && *src)
		src++;
	while (i < size && src[i] != c && src[i])
	{
		d[i] = src[i];
		i++;
	}
	d[i] = 0;
	return (src + i);
}

static size_t		ft_strlenword(char const *str, char c)
{
	size_t	i;

	i = 0;
	while (*str == c)
		str++;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	max_len;
	size_t	nb_w;
	size_t	i;
	char	**tab;

	if (s == NULL)
		return (NULL);
	nb_w = ft_count_word_c(s, c);
	if (!(tab = (char**)malloc((nb_w + 1) * sizeof(char *))))
		return (0);
	tab[nb_w] = 0;
	i = 0;
	while (nb_w--)
	{
		max_len = ft_strlenword(s, c);
		if (!(tab[i] = ft_strnew(max_len)))
			return (0);
		s = ft_strlcpy(tab[i], s, max_len, c);
		i++;
	}
	return (tab);
}

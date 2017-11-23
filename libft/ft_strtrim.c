/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 16:32:54 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/13 12:33:44 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	top;
	size_t	end;
	size_t	i;
	size_t	op;
	char	*res;

	i = -1;
	top = 0;
	if (s == NULL)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (ft_isspace(s[top]))
		top++;
	while (ft_isspace(s[end]) && end > 0)
		end--;
	op = end - top + 1;
	if (!(res = ft_strnew(((int)(end + 1 - top) > 0) ? (end - top + 1) : 1)))
		return (NULL);
	while ((int)++i < (int)op)
		res[i] = s[top + i];
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:52:25 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/14 15:44:17 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc_str(char **astr, size_t len_to_add)
{
	size_t	len;
	size_t	i;
	char	*res;
	char	*src;

	if (!astr)
		return (NULL);
	if (!*astr)
		return (NULL);
	src = *astr;
	len = ft_strlen(src);
	if (!(res = ft_strnew(len + len_to_add)))
		return (NULL);
	i = -1;
	while (src[++i])
		res[i] = src[i];
	res[i] = '\0';
	free(src);
	*astr = 0;
	return (res);
}

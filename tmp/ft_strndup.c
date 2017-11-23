/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:57:39 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/14 16:23:37 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char const *str, size_t n)
{
	char	*res;
	size_t	i;

	i = 0;
	while (i < n && str[i])
		i++;
	if (!(res = ft_strnew(i)))
		return (NULL);
	i = 0;
	while (n)
	{
		res[i] = str[i];
		i++;
		n--;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:47:19 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/15 13:11:39 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	n;

	i = 0;
	n = len;
	if (!*needle)
		return ((char*)haystack);
	while (n && haystack[i])
	{
		if (haystack[i] == *needle)
		{
			j = 0;
			while (haystack[i + j] == needle[j] && needle[j] && i + j < len)
				j++;
			if (!needle[j])
				return ((char*)(haystack + i));
		}
		i++;
		n--;
	}
	return (NULL);
}

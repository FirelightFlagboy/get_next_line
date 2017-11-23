/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:38:04 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/10 15:12:34 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t i;

	if (!*needle)
		return ((char*)haystack);
	while (*haystack)
	{
		if (*haystack == needle[0])
		{
			i = 0;
			while (haystack[i] && needle[i] == haystack[i])
				i++;
			if (!needle[i])
				return ((char*)haystack);
		}
		haystack++;
	}
	return (NULL);
}

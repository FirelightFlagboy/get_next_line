/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:37:41 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/10 14:38:20 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		hf;
	size_t	len;

	hf = 0;
	len = ft_strlen(s) + 1;
	while (!hf && len)
	{
		if (*s == c)
			return ((char*)s);
		s++;
		len--;
	}
	return (NULL);
}

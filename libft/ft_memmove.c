/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:18:49 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/13 14:35:37 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char unsigned	*s;
	char unsigned		*dst;

	if (n == 0)
		return (dest);
	s = src;
	dst = dest;
	if ((unsigned long)dest < (unsigned long)src)
		while (n--)
			*dst++ = *s++;
	else
		while (n--)
			*(dst + n) = *(s + n);
	return (dest);
}

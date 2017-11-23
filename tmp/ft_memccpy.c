/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:51:19 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/13 09:40:18 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	const unsigned char	*sr;
	unsigned char		*dst;

	sr = src;
	dst = dest;
	while (n)
	{
		*dst = *sr++;
		if (*dst == (unsigned char)c)
			return (dst + 1);
		dst++;
		n--;
	}
	return (NULL);
}

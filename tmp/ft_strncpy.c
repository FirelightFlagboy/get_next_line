/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:05:32 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/07 16:11:51 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;
	size_t len_src;

	len_src = 0;
	i = -1;
	while (src[len_src])
		len_src++;
	while (++i < len)
	{
		if (i < len_src)
			dst[i] = src[i];
		else
			dst[i] = '\0';
	}
	return (dst);
}

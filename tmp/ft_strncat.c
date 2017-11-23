/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 12:09:23 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/15 10:03:01 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, char const *s2, size_t n)
{
	char *dst;

	dst = s1;
	while (*dst)
		dst++;
	while (n)
	{
		if (*s2)
			*dst = *s2++;
		else
		{
			*dst = 0;
			return (s1);
		}
		dst++;
		n--;
	}
	*dst = 0;
	return (s1);
}

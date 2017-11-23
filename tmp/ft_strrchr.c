/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:10:10 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/14 09:24:19 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*save;
	unsigned char	d;

	d = (unsigned char)c;
	save = NULL;
	while (*s != '\0')
	{
		if ((unsigned char)*s == d)
			save = (char*)s;
		s++;
	}
	if (d == 0)
		return ((char*)s);
	else
		return (save);
}

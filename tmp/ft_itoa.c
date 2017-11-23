/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 08:02:20 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/15 10:21:33 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static size_t	ft_pow(int n, int p)
{
	if (p == 0)
		return (1);
	return (n * ft_pow(n, p - 1));
}

char			*ft_itoa(int n)
{
	char			*res;
	unsigned int	dup;
	int				len;
	int				isneg;

	len = 0;
	isneg = (n < 0) ? 1 : 0;
	dup = (isneg) ? -n : n;
	while (ft_pow(10, len) <= dup)
		len++;
	len += (n == 0) ? 1 : 0;
	if (!(res = ft_strnew(len + isneg)))
		return (NULL);
	res[0] = (isneg) ? '-' : 'p';
	while (len)
	{
		res[len - ((isneg) ? 0 : 1)] = (dup % 10) + '0';
		dup /= 10;
		len--;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 16:39:39 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/13 14:35:24 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_lendigit(const char *str)
{
	size_t i;

	i = 0;
	while (ft_isdigit(str[i]))
		i++;
	return (i);
}

static int		ft_strnbrcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && ft_isdigit(s1[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	long long int	res;
	int				sign;

	while (ft_isspace(*str))
		str++;
	res = 0;
	sign = (*str == '-') ? 1 : 0;
	str += (*str == '-' || *str == '+') ? 1 : 0;
	if (ft_lendigit(str) > 18)
	{
		if (sign && ft_strnbrcmp(str, "9223372036854775808") > 0)
			return (0);
		else if (!sign && ft_strnbrcmp(str, "9223372036854775807") > 0)
			return (-1);
	}
	while (ft_isdigit(*str))
	{
		res *= 10;
		res += *str - '0';
		str++;
	}
	return ((int)(sign) ? -res : res);
}

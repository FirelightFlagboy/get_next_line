/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:12:40 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/14 16:18:18 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_word(char *str)
{
	int		inw;
	size_t	count;

	inw = 0;
	count = 0;
	while (*str)
	{
		if (!ft_isspace(*str) && !inw)
		{
			count++;
			inw = 1;
		}
		else
			inw = (ft_isspace(*str)) ? 0 : inw;
		str++;
	}
	return (count);
}

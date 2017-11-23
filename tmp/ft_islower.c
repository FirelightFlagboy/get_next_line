/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 15:19:18 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/14 15:34:23 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_islower(int c)
{
	char l;

	if (c > 256)
		return (0);
	l = c;
	if (l >= 'a' && l <= 'z')
		return (1);
	return (0);
}

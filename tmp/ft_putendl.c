/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 08:32:10 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/13 15:25:03 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char c;

	if (!s)
		return ;
	c = '\n';
	write(1, s, ft_strlen(s));
	write(1, &c, 1);
}

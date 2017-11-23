/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 08:29:29 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/10 16:21:22 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *res;

	if (!(res = (char*)malloc((size + 1) * sizeof(char))))
		return (NULL);
	while (size + 1)
	{
		res[size] = '\0';
		size--;
	}
	return (res);
}

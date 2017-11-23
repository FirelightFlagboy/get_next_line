/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 23:03:46 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/15 11:06:01 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long long int nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-');
		if ((-nb) / 10 >= 1)
			ft_putnbr((-nb) / 10);
		return (ft_putchar(((-nb) % 10) + '0'));
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		return (ft_putchar((nb % 10) + '0'));
	}
	else
		return (ft_putchar(nb + '0'));
}

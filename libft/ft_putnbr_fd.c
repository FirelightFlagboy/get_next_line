/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 08:40:03 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/15 11:06:24 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		if ((-nb) / 10 >= 1)
			ft_putnbr_fd((-nb) / 10, fd);
		return (ft_putchar_fd(((-nb) % 10) + '0', fd));
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		return (ft_putchar_fd((nb % 10) + '0', fd));
	}
	else
		return (ft_putchar_fd(nb + '0', fd));
}

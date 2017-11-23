/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:33:06 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/13 14:15:24 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *current;
	t_list *next;

	if (alst == 0)
		return ;
	if (*alst == 0)
		return ;
	current = *alst;
	if (!current)
		return ;
	while (current)
	{
		next = current->next;
		(*del)(current->content, current->content_size);
		free(current);
		current = next;
	}
	*alst = 0;
}

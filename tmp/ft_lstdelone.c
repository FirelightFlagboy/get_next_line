/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:39:50 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/13 14:16:00 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list *head;

	if (alst == 0)
		return ;
	if (*alst == 0)
		return ;
	head = *alst;
	(*del)(head->content, head->content_size);
	free(head);
	*alst = 0;
}

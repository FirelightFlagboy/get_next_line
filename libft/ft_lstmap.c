/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenneto <fbenneto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:48:32 by fbenneto          #+#    #+#             */
/*   Updated: 2017/11/13 14:26:43 by fbenneto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *head;
	t_list *current;

	if (!lst)
		return (0);
	if (!(*f))
		return (0);
	head = (*f)(lst);
	current = head;
	lst = lst->next;
	while (lst)
	{
		current->next = (*f)(lst);
		if (!current->next)
			return (0);
		current = current->next;
		lst = lst->next;
	}
	return (head);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 16:01:00 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/02 19:06:37 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	t_list	*list_clear(t_list *list)
{
	t_list		*tmp;

	while (list)
	{
		tmp = list->next;
		free(list->content);
		free(list);
		list = tmp;
	}
	return (NULL);
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*list;
	t_list		*head;

	if (lst == NULL || f == NULL)
		return (NULL);
	if ((list = f(lst)) == NULL)
		return (NULL);
	head = list;
	lst = lst->next;
	while (lst)
	{
		if ((list->next = f(lst)) == NULL)
			return (list_clear(head));
		list = list->next;
		lst = lst->next;
	}
	return (head);
}

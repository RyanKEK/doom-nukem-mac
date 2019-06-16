/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 13:32:07 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/05 18:51:48 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;

	if (!(node = malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
	{
		node->content_size = 0;
		node->content = NULL;
		node->next = NULL;
	}
	else if (node)
	{
		node->content_size = content_size;
		node->content = malloc(content_size);
		ft_memcpy(node->content, content, content_size);
		node->next = NULL;
	}
	return (node);
}

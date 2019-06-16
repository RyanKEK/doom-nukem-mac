/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 14:06:42 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/02 17:33:09 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	print_list(t_list *list)
{
	if (!list)
		return ;
	while (list)
	{
		ft_putstr(list->content);
		list = list->next;
		ft_putchar('\n');
	}
}

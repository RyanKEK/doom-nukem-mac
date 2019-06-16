/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:58:13 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/07 18:40:30 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_char(char c)
{
	write(1, &c, 1);
}

void		ft_putchar(unsigned int c)
{
	if (c < 128)
		print_char(c);
	else if (c < 2048)
	{
		print_char((c >> 6) + 192);
		print_char((c & 63) + 128);
	}
	else if (c < 65536)
	{
		print_char((c >> 12) + 224);
		print_char(((c >> 6) & 63) + 128);
		print_char((c & 63) + 128);
	}
	else if (c < 2097152)
	{
		print_char((c >> 18) + 240);
		print_char(((c >> 12) & 63) + 128);
		print_char(((c >> 6) & 63) + 128);
		print_char((c & 63) + 128);
	}
}

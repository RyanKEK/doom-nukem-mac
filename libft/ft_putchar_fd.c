/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 14:58:13 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/05 20:29:47 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_char(char c, int fd)
{
	write(fd, &c, 1);
}

void		ft_putchar_fd(unsigned int c, int fd)
{
	if (c < 128)
		print_char(c, fd);
	else if (c < 2048)
	{
		print_char((c >> 6) + 192, fd);
		print_char((c & 63) + 128, fd);
	}
	else if (c < 65536)
	{
		print_char((c >> 12) + 224, fd);
		print_char(((c >> 6) & 63) + 128, fd);
		print_char((c & 63) + 128, fd);
	}
	else if (c < 2097152)
	{
		print_char((c >> 18) + 240, fd);
		print_char(((c >> 12) & 63) + 128, fd);
		print_char(((c >> 6) & 63) + 128, fd);
		print_char((c & 63) + 128, fd);
	}
}

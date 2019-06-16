/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 15:27:59 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/01 18:55:29 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void		ft_putchar_nb(char c, int fd)
{
	write(fd, &c, 1);
}

void				ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_nb('-', fd);
		nb = -n;
	}
	else
		nb = n;
	if (nb > 9)
	{
		n = nb / 10;
		nb = nb % 10;
		ft_putnbr_fd(n, fd);
	}
	ft_putchar_nb(nb + 48, fd);
}

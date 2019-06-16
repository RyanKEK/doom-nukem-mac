/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_dec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 20:40:37 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/05 22:20:31 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_cast(char c)
{
	if (c > 47 && c < 58)
		return (c - 48);
	else if (c > 64 && c < 71)
		return (c - 55);
	else
		return (c - 87);
}

long long	any_to_dec(char *s, int base)
{
	int			i;
	long long	res;

	if (!s)
		return (0);
	res = 0;
	i = ft_strlen(s);
	while (--i > -1)
		res = res + ft_cast(*s++) * ft_pow(base, i);
	return (res);
}

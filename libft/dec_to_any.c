/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dec_to_any.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 21:44:46 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/05 22:21:36 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	ft_cast_to_char(int n)
{
	if (n > -1 && n < 10)
		return (n + 48);
	else
		return (n + 55);
}

char			*dec_to_any(long long n, int base)
{
	char		*str;
	int			i;
	int			sign;

	sign = 2;
	i = 0;
	if (n < 0)
	{
		sign += 1;
		n = -n;
	}
	if (!(str = (char *)malloc(sizeof(char) * n / base + sign)))
		return (NULL);
	if (sign == 3)
		str[i++] = '-';
	while (n >= base)
	{
		str[i++] = ft_cast_to_char(n % base);
		n = n / base;
	}
	str[i++] = ft_cast_to_char(n % base);
	n = n / base;
	str[i] = '\0';
	str = ft_strrev(str, sign - 2);
	return (str);
}

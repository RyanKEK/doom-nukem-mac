/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:15:09 by ohavryle          #+#    #+#             */
/*   Updated: 2019/02/12 16:04:08 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define SIGN {sign -= *str; str++;}

int						ft_atoi(const char *str)
{
	unsigned long int	res;
	int					sign;

	sign = 44;
	res = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		sign -= *str;
		str++;
	}
	else
		sign = 1;
	while (*str > 47 && *str < 58)
	{
		res = res * 10 + *str++ - 48;
		if (res >= 9223372036854775807 && sign == 1)
			return (-1);
		else if (res > 9223372036854775807 && sign == -1)
			return (0);
	}
	return ((int)(res * sign));
}

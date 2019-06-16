/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 14:06:29 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/01 18:47:06 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_itoa(int n)
{
	long long	tmp;
	int			i;
	char		*str;

	i = 0;
	tmp = n;
	while ((tmp /= 10) != 0)
		i++;
	i += 1;
	if (n < 0)
		i += 1;
	if (!(str = (char*)malloc(sizeof(char) * i + 1)))
		return (NULL);
	str[i--] = '\0';
	tmp = n;
	if (tmp < 0)
	{
		tmp *= -1;
		str[0] = '-';
	}
	str[i--] = tmp % 10 + 48;
	while ((tmp /= 10) > 0)
		str[i--] = tmp % 10 + 48;
	return (str);
}

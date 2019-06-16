/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 18:17:35 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/02 20:03:09 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int i;

	i = 0;
	if (dst < src)
	{
		while (len-- > 0)
		{
			*(unsigned char*)dst++ = *(unsigned char*)src++;
			i++;
		}
	}
	else
	{
		while (len-- > 0)
			*((unsigned char*)dst + len) = *((unsigned char*)src + len);
	}
	return (dst - i);
}

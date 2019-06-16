/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 15:20:50 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/05 18:01:26 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	while (n-- > 0)
	{
		*(unsigned char*)dst++ = *(unsigned char*)src++;
		if (*(unsigned char*)(src - 1) == (unsigned char)c)
			break ;
	}
	if ((int)n == -1)
		return (NULL);
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 20:30:40 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/01 16:49:56 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		c;
	int		tmp;
	size_t	len;

	c = 0;
	i = ft_strlen(dst);
	len = i;
	tmp = dstsize - i - 1;
	while (c < tmp && src[c])
		dst[i++] = src[c++];
	if (dstsize < len)
		return (ft_strlen(src) + dstsize);
	if (dstsize != 0 && len <= dstsize)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:49:35 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/05 18:23:48 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (c == '\0' && s[ft_strlen(s)] == '\0')
		return ((char*)s + ft_strlen(s));
	while (*s)
	{
		if (*s++ == c)
			return ((char*)s - 1);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 14:49:35 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/05 18:30:07 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == '\0' && s[ft_strlen(s)] == '\0')
		return ((char*)s + ft_strlen(s));
	while (--i > -1)
		if (s[i] == c)
			return ((char*)s + i);
	return (NULL);
}

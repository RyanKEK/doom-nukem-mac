/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 14:20:21 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/01 17:10:08 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !(str = (char*)malloc(len + 1)))
		return (NULL);
	str = (char*)malloc(len + 1);
	while (len--)
		str[i++] = s[start++];
	str[i] = '\0';
	return (str);
}

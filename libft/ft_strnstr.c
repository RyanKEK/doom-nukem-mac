/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:35:53 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/01 19:07:57 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*tmp;
	int		i;
	int		lentmp;

	lentmp = len;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack && len)
	{
		lentmp = len;
		i = 0;
		if (*haystack == *needle)
		{
			tmp = (char*)haystack;
			while (haystack[i] == needle[i] && lentmp-- && haystack[i])
				i++;
			if (needle[i] == '\0')
				return (tmp);
		}
		len--;
		haystack++;
	}
	return (NULL);
}

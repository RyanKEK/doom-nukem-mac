/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:35:53 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/01 19:08:16 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	char	*tmp;
	int		i;

	if (*needle == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		i = 0;
		if (*haystack == *needle)
		{
			tmp = (char*)haystack;
			while (haystack[i] == needle[i] && haystack[i])
				i++;
			if (needle[i] == '\0')
				return (tmp);
		}
		haystack++;
	}
	return (NULL);
}

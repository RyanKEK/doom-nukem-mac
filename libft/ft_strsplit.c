/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 17:10:05 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/01 15:13:00 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	**arrcrt(char **arr, const char *s, char c)
{
	int			i;
	int			n;

	n = 0;
	while (*s)
	{
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		if (i > 0)
		{
			if (!(arr[n] = (char*)malloc(sizeof(char) * i + 1)))
				return (NULL);
			i = 0;
			while (*s && *s != c)
				arr[n][i++] = *s++;
			arr[n++][i] = '\0';
			s--;
		}
		s++;
	}
	arr[n] = 0;
	return (arr);
}

char			**ft_strsplit(char const *s, char c)
{
	int			n;
	int			i;
	char		**arr;

	if (s == 0)
		return (0);
	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i + 1] == c || s[i + 1] == '\0')
			n++;
		i++;
	}
	if (!(arr = (char**)malloc(sizeof(char*) * n + 1)))
		return (NULL);
	if (arrcrt(arr, s, c) == NULL)
		while (*arr)
			ft_memdel((void**)&*arr++);
	arr = arrcrt(arr, s, c);
	return (arr);
}

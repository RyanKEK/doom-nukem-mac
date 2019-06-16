/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohavryle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 16:42:57 by ohavryle          #+#    #+#             */
/*   Updated: 2018/11/25 17:30:46 by ohavryle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <strings.h>

void				*ft_realloc(void *ptr, int new_size, size_t old_size)
{
	void	*tmp;

	if (!ptr)
	{
		if (!(tmp = malloc(new_size)))
			return (NULL);
		return (tmp);
	}
	if ((tmp = malloc(new_size)))
	{
		ft_memcpy(tmp, ptr, old_size);
		free(ptr);
	}
	return (tmp);
}

void				str_move(char *str, size_t i)
{
	int		j;
	size_t	len;

	j = 0;
	len = ft_strlen(str);
	while (i < len)
		str[j++] = str[++i];
	i = -1;
	if (j == 0)
		ft_bzero(str, ft_strlen(str));
	else
		ft_bzero(str + j + 1, len - j);
}

int					line_crt(t_list **head, char **line, int *tmp, int *j)
{
	int i;

	i = -1;
	while ((*head)->content[++i] && (*head)->content[i] != '\n')
		;
	*tmp = *tmp + i;
	if (!(*line = ft_realloc(*line, *tmp, *tmp - i)))
		return (-1);
	i = -1;
	while ((*head)->content[++i] && (*head)->content[i] != '\n')
		line[0][(*j)++] = (*head)->content[i];
	if ((*head)->content[i] == '\n')
	{
		str_move((*head)->content, i);
		return (0);
	}
	str_move((*head)->content, i - 1);
	return (1);
}

void				list_man(t_list **list, t_list **head, int fd)
{
	if (!(*list))
	{
		*list = ft_lstnew("\0", BUFF_SIZE + 1);
		(*list)->content_size = fd;
	}
	*head = *list;
	while (*head && (const int)(*head)->content_size != fd)
		*head = (*head)->next;
	if (*head == NULL && *list != NULL)
	{
		ft_lstadd(&(*list), ft_lstnew("\0", BUFF_SIZE + 1));
		(*list)->content_size = fd;
		*head = *list;
	}
	(*head)->content_size = fd;
}

int					get_next_line(const int fd, char **line)
{
	int				j;
	int				rd;
	int				tmp;
	static t_list	*list;
	t_list			*head;

	j = 0;
	tmp = 0;
	if (!(line) || (rd = read(fd, NULL, 0)) < 0)
		return (-1);
	*line = NULL;
	list_man(&list, &head, fd);
	while (1)
	{
		if (!(head->content[0]))
		{
			if ((rd = read(fd, head->content, BUFF_SIZE)) < 1)
				break ;
			head->content[rd] = '\0';
		}
		if ((rd = line_crt(&head, &(*line), &tmp, &j)) < 1)
			break ;
	}
	RETURN;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 14:30:31 by sjang             #+#    #+#             */
/*   Updated: 2016/10/21 14:30:33 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			ft_read_all(const int fd, char **str, int size, int sizeall)
{
	char	*temp;
	char	arr[BUFF_SIZE + 1];

	ft_bzero(arr, BUFF_SIZE + 1);
	if ((*str = (char*)malloc(sizeof(char) * 1)) == NULL)
		RETRUN_ERROR(-1);	
	while ((size = read(fd, arr, BUFF_SIZE)) != 0)
	{
		if (size == -1)
			RETRUN_ERROR(-1);
		temp = (char*)malloc(sizeof(char) * (sizeall + 1));
		ft_memcpy(temp, *str, sizeall);
		free(*str);
		*str = (char*)malloc(sizeof(char) * (sizeall + size + 1));
		ft_memcpy(*str, temp, sizeall);
		ft_memcpy(*str + sizeall, arr, size);
		(*str)[sizeall + size] = 0;
		free(temp);
		sizeall += size;
	}
	return (sizeall);
}

void		ft_store_str(t_list *head, char *str)
{
	size_t	stapos;
	size_t	endpos;
	int		endflag;

	endpos = 0;
	stapos = 0;
	endflag = 0;
	while (!endflag && str[endpos] != 0)
	{
		stapos = endpos;
		while (str[endpos] != 0 && str[endpos] != '\n')
			endpos++;
		if (str[endpos] == 0)
			endflag = 1;
		if (endpos - stapos)
		{
			str[endpos] = 0;
			ft_lstaddback(&head, ft_lstnew(str + stapos, endpos - stapos + 1));
		}
		else
			ft_lstaddback(&head, ft_lstnew("", sizeof(char) * 1));
		endpos += 1;
	}
}

t_lists		*ft_get_curx(t_lists **lists, const int fd, t_lists *cur)
{
	if ((*lists) == NULL)
	{
		(*lists) = (t_lists*)malloc(sizeof(t_lists));
		MALLOC_CHECK(*lists);
		(*lists)->head = ft_lstnew(NULL, 0);
		(*lists)->fd = fd;
		(*lists)->nth = 0;
		(*lists)->next = NULL;
	}
	cur = *lists;
	while (cur != NULL && cur->fd != fd)
	{
		if (cur->next == NULL)
		{
			cur->next = (t_lists*)malloc(sizeof(t_lists));
			MALLOC_CHECK(cur->next);
			cur->next->head = ft_lstnew(NULL, 0);
			cur->next->fd = fd;
			cur->next->nth = 0;
			cur->next->next = NULL;
		}
		cur = cur->next;
	}
	return (cur);
}

int			get_next_line(const int fd, char **line)
{
	static t_lists	*lists = NULL;
	t_lists			*cur;
	int				bufsize;
	char			*str;

	if (fd < 0 || line == NULL || BUFF_SIZE <= 0)
		RETRUN_ERROR(-1);
	cur = ft_get_curx(&lists, fd, 0);
	if (cur->nth == 0)
		bufsize = ft_read_all(cur->fd, &str, 0, 0);
	else
		bufsize = 0;
	if (bufsize)
	{
		ft_store_str(cur->head, str);
		free(str);
	}
	if (cur->nth >= ft_lstcount(cur->head))
	{
		*line = ft_strdup("");
		return (0);
	}
	*line = (char*)ft_lstnthdata(cur->head, (cur->nth)++);
	return (1);
}

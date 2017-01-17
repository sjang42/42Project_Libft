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

#include <libft.h>

static void			ft_store_str(t_list *head, char *str)
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

static t_lists		*ft_get_curx(t_lists **lists, const int fd)
{
	t_lists *cur;

	if ((*lists) == NULL)
	{
		(*lists) = (t_lists*)malloc(sizeof(t_lists));
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
			cur->next->head = ft_lstnew(NULL, 0);
			cur->next->fd = fd;
			cur->next->nth = 0;
			cur->next->next = NULL;
		}
		cur = cur->next;
	}
	return (cur);
}

static void			del_fd(t_lists *lst, int fd)
{
	t_lists		*cur;
	t_lists		*before;
	t_list		*cur_list;
	t_list		*tmp;

	cur = lst;
	before = cur;
	while (cur != NULL && cur->fd != fd)
	{
		before = cur;
		cur = cur->next;
	}
	if (cur->fd == fd)
	{
		before->next = cur->next;
		cur_list = cur->head;
		while (cur_list->next)
		{
			tmp = cur_list->next;
			free(cur_list);
			cur_list = tmp;
		}
		free(cur_list);
		free(cur);
	}
}

static int			deal_bufsize(
					int bufsize, t_lists *lists,
					t_lists *cur, char *str)
{
	if (bufsize == -1)
		del_fd(lists, cur->fd);
	if (bufsize)
	{
		ft_store_str(cur->head, str);
		free(str);
	}
	return (bufsize);
}

int					get_next_line(const int fd, char **line)
{
	static t_lists	*lists = NULL;
	t_lists			*cur;
	int				bufsize;
	char			*str;

	if (fd < 0 || line == NULL)
		RETRUN_ERROR(-1);
	cur = ft_get_curx(&lists, fd);
	bufsize = 0;
	if (cur->nth == 0)
		bufsize = ft_read_all(cur->fd, &str);
	if (bufsize)
		deal_bufsize(bufsize, lists, cur, str);
	if (bufsize == -1)
		return (-1);
	if (cur->nth >= ft_lstcount(cur->head))
	{
		del_fd(lists, fd);
		return (0);
	}
	*line = (char*)ft_lstnthdata(cur->head, (cur->nth)++);
	return (1);
}

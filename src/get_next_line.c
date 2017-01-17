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

t_lists		*ft_get_curx(t_lists **lists, const int fd)
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

void		del_list(t_list *head)
{
	t_list *cur;
	t_list *tmp;

	cur = head;
	while (cur->next)
	{
		tmp = cur->next;
		free(cur);
		cur = tmp;
	}
	free(cur);
}

void		del_fd(t_lists *lst, int fd)
{
	t_lists *cur;
	t_lists *before;

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
		del_list(cur->head);
		free(cur);
	}
}

int			get_next_line(const int fd, char **line)
{
	static t_lists	*lists = NULL;
	t_lists			*cur;
	int				bufsize;
	char			*str;

	if (fd < 0 || line == NULL)
		RETRUN_ERROR(-1);
	cur = ft_get_curx(&lists, fd);
	if (cur->nth == 0)
		bufsize = ft_read_all(cur->fd, &str);
	else
		bufsize = 0;
	if (bufsize)
	{
		ft_store_str(cur->head, str);
		free(str);
	}
	if (cur->nth >= ft_lstcount(cur->head))
	{
		del_fd(lists, fd);
		*line = ft_strdup("");
		return (0);
	}
	*line = (char*)ft_lstnthdata(cur->head, (cur->nth)++);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/26 20:44:38 by sjang             #+#    #+#             */
/*   Updated: 2016/09/26 20:44:40 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *contentlst;
	t_list *head;

	if (lst == NULL)
		return (NULL);
	contentlst = f(lst);
	new = ft_lstnew(contentlst->content, contentlst->content_size);
	if (new == NULL)
		return (NULL);
	head = new;
	while (lst->next != NULL)
	{
		lst = lst->next;
		contentlst = f(lst);
		new = ft_lstnew(contentlst->content, contentlst->content_size);
		if (new == NULL)
			return (NULL);
		ft_lstaddback(&head, new);
	}
	return (head);
}

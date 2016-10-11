/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:12:34 by sjang             #+#    #+#             */
/*   Updated: 2016/09/28 21:12:35 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list,
	void const *content, size_t content_size)
{
	t_list *cur;

	cur = *begin_list;
	while (cur->next != 0)
		cur = cur->next;
	cur->next = ft_lstnew(content, content_size);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/24 19:25:47 by sjang             #+#    #+#             */
/*   Updated: 2016/12/24 19:25:48 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/stack.h"

t_sdata		ft_stack_peek(t_stack *pstack)
{
	if (ft_stack_isempty(pstack))
		return (0);
	return (pstack->head->data);
}

void		ft_stack_destroy(t_stack **pstack)
{
	if (!*pstack)
		return ;
	while (!ft_stack_isempty(*pstack))
		ft_stack_pop(*pstack);
	free(*pstack);
	*pstack = NULL;
}

int			ft_stack_issort(t_stack *pstack)
{
	t_stack_node	*cur;

	if (ft_stack_isempty(pstack) ||
		pstack->head->next == NULL)
		return (1);
	cur = pstack->head;
	while (cur->next)
	{
		if (cur->data >= cur->next->data)
			return (0);
		cur = cur->next;
	}
	return (1);
}

int			ft_stack_size(t_stack *pstack)
{
	t_stack_node	*cur;
	int				count;

	if (ft_stack_isempty(pstack))
		return (0);
	count = 0;
	cur = pstack->head;
	while (cur)
	{
		cur = cur->next;
		count++;
	}
	return (count);
}

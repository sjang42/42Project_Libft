/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 23:07:28 by sjang             #+#    #+#             */
/*   Updated: 2016/11/25 23:07:29 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/stack.h"

void		ft_stack_init(t_stack *pstack)
{
	pstack->head = NULL;
	pstack->tail = NULL;
}

t_stack		*ft_stack_new(void)
{
	t_stack *newst;

	newst = (t_stack*)malloc(sizeof(t_stack));
	ft_stack_init(newst);
	return (newst);
}

int			ft_stack_isempty(t_stack *pstack)
{
	if (pstack->head == NULL)
		return (TRUE);
	else
		return (FALSE);
}

void		ft_stack_push(t_stack *pstack, t_sdata data)
{
	t_stack_node *newnode;

	newnode = (t_stack_node*)malloc(sizeof(t_stack_node));
	newnode->data = data;
	newnode->next = pstack->head;
	if (!pstack->head)
		pstack->tail = newnode;
	pstack->head = newnode;
}

t_sdata		ft_stack_pop(t_stack *pstack)
{
	t_sdata			ret;
	t_stack_node	*tempnode;

	if (ft_stack_isempty(pstack))
		return (0);
	ret = pstack->head->data;
	tempnode = pstack->head;
	pstack->head = pstack->head->next;
	free(tempnode);
	return (ret);
}

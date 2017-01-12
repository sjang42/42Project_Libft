/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 16:42:24 by sjang             #+#    #+#             */
/*   Updated: 2016/10/21 16:42:25 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_lstcount(t_list *head)
{
	int		count;
	t_list	*cur;

	count = 0;
	cur = head;
	while (cur->next != NULL)
	{
		cur = cur->next;
		count = count + 1;
	}
	return (count);
}

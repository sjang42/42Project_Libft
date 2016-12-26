/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnthdata.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/21 16:43:18 by sjang             #+#    #+#             */
/*   Updated: 2016/10/21 16:43:18 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_lstnthdata(t_list *head, int nth)
{
	t_list *cur;

	cur = head;
	while (nth >= 0 && cur != NULL)
	{
		cur = cur->next;
		nth--;
	}
	if (cur == NULL)
		return (NULL);
	return (cur->content);
}

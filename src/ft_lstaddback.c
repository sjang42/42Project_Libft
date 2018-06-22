/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:45:52 by sjang             #+#    #+#             */
/*   Updated: 2016/09/28 21:45:53 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    ft_lstaddback(t_list **alst, t_list *newlst)
{
    t_list *cur;

    cur = *alst;
    while (cur->next != 0)
        cur = cur->next;
    cur->next = newlst;
}

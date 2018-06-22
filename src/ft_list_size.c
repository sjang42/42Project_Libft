/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 21:15:42 by sjang             #+#    #+#             */
/*   Updated: 2016/09/28 21:15:43 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int     ft_list_size(t_list *begin_list)
{
    int     count;
    t_list  *cur;

    cur = begin_list;
    if (cur == 0)
        return (0);
    count = 1;
    while (cur->next != 0)
    {
        cur = cur->next;
        count++;
    }
    return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graph_show.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 10:19:59 by sjang             #+#    #+#             */
/*   Updated: 2017/01/07 10:20:00 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void            graph_show(t_graph *pg)
{
    int i;
    int j;

    i = 0;
    while (i < pg->num_v)
    {
        j = 0;
        while (j < pg->num_v)
        {
            ft_putnbr((pg->grid)[i][j]);
            ft_putchar(' ');
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}

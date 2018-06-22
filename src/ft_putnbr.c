/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:03:07 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:03:08 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int  get_positional_int(int nb)
{
    int positional;
    int temp;

    positional = 1;
    temp = nb;
    while (temp >= 10 || temp <= -10)
    {
        temp /= 10;
        positional *= 10;
    }
    return (positional);
}

void        ft_putnbr(int nb)
{
    char    digit;
    int     positional;

    positional = get_positional_int(nb);
    if (nb < 0)
    {
        write(1, "-", 1);
        positional *= -1;
    }
    while (positional != 0)
    {
        digit = nb / positional + '0';
        write(1, &digit, 1);
        nb %= positional;
        positional /= 10;
    }
}

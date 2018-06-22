/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:02:13 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:02:15 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int  get_positional_int(int nb, int *digit)
{
    int positional;
    int temp;
    int len;

    positional = 1;
    len = 1;
    temp = nb;
    while (temp >= 10 || temp <= -10)
    {
        temp /= 10;
        positional *= 10;
        len++;
    }
    if (nb < 0)
        len++;
    *digit = len;
    return (positional);
}

static void deal_minus(char *str, int *positional, int *i)
{
    str[0] = '-';
    *positional = (*positional) * -1;
    (*i)++;
}

char        *ft_itoa(int n)
{
    char    *str;
    int     len;
    int     i;
    int     positional;

    i = 0;
    positional = get_positional_int(n, &len);
    str = (char*)malloc(sizeof(char) * ((len) + 1));
    if (str == 0)
        return (0);
    if (n < 0)
        deal_minus(str, &positional, &i);
    while (positional != 0)
    {
        str[i] = (char)(n / positional + '0');
        n %= positional;
        positional /= 10;
        i++;
    }
    str[i] = 0;
    return (str);
}

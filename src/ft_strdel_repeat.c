/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel_repeat.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 18:12:27 by sjang             #+#    #+#             */
/*   Updated: 2017/02/15 18:12:28 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char        *ft_strdel_repeat(char *dest, char ch)
{
    int     start;
    int     end;
    char    *str;

    start = 0;
    str = (char*)malloc(sizeof(char) * (ft_strlen(dest) + 1));
    ft_strcpy(str, dest);
    str[ft_strlen(dest)] = 0;
    while (str[start])
    {
        while (str[start] != ch && str[start])
            start++;
        end = start;
        while (str[end] == ch)
            end++;
        if (end != start)
            ft_memmove(str + start + 1, str + end, ft_strlen(str + end) + 1);
        start++;
    }
    str = (char*)ft_realloc(str,
                            (ft_strlen(dest) + 1) * sizeof(char),
                            (ft_strlen(str) + 1) * sizeof(char));
    return (str);
}

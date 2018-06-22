/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:32:26 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:32:27 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int     ft_strnequ(char const *s1, char const *s2, size_t n)
{
    size_t  i;
    int     result;

    if (s1 == NULL || s2 == NULL)
        return (0);
    i = 0;
    result = 0;
    while (result == 0 && i < n)
    {
        if (s1[i] == 0 && s2[i] == 0)
            return (1);
        result = (int)s1[i] - (int)s2[i];
        i++;
    }
    if (result == 0)
        return (1);
    else
        return (0);
}

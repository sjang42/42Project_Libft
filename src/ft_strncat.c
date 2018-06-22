/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:23:36 by sjang             #+#    #+#             */
/*   Updated: 2016/09/23 17:23:37 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strncat(char *dest, const char *src, int nb)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i] != 0)
        i++;
    while (src[j] != 0 && j < nb)
    {
        dest[i + j] = ((char*)src)[j];
        j++;
    }
    dest[i + j] = 0;
    return (dest);
}

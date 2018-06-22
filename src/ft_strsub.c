/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:34:44 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:34:45 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char    *ft_strsub(char const *s, unsigned int start, size_t len)
{
    char *substring;

    if (s == NULL)
        return (NULL);
    substring = (char*)malloc(sizeof(char) * (len + 1));
    if (substring == NULL)
        return ((char*)NULL);
    ft_memcpy(substring, s + start, len);
    substring[len] = 0;
    return (substring);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_strch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 09:52:31 by sjang             #+#    #+#             */
/*   Updated: 2017/01/07 09:52:33 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int         ft_count_strch(char *s, char c)
{
    int i;
    int count;

    count = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == c)
            count++;
        i++;
    }
    return (count);
}

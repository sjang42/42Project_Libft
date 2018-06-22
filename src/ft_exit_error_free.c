/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_error_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 19:08:09 by sjang             #+#    #+#             */
/*   Updated: 2017/02/15 19:08:10 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void    ft_exit_error_free(char *error)
{
    write(2, "Error", 5);
    if (error)
    {
        write(2, " : ", 3);
        write(2, error, ft_strlen(error));
    }
    write(2, "\n", 1);
    free(error);
    exit(-1);
}

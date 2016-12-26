/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exit_error.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 02:41:20 by sjang             #+#    #+#             */
/*   Updated: 2016/11/26 02:41:21 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_exit_error(char *error)
{
	ft_putstr("Error");
	if (error)
	{
		ft_putstr(" : ");
		ft_putstr(error);
	}
	ft_putstr("\n");
	exit(-1);
}

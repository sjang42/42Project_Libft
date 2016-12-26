/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/28 18:35:34 by sjang             #+#    #+#             */
/*   Updated: 2016/09/28 18:35:35 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_sqrt(int nb)
{
	int i;
	int match;

	i = 0;
	match = 0;
	while (i < nb && match != 1)
	{
		if (ft_iterative_power(i, 2) == nb)
			match++;
		else
			i++;
	}
	if (match == 0)
		return (0);
	else
		return (i);
}

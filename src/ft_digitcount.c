/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitcount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/24 19:02:20 by sjang             #+#    #+#             */
/*   Updated: 2016/12/24 19:02:24 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_digitcount(int nb)
{
	int			count;
	long long	n;

	n = (long long)nb;
	count = 1;
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

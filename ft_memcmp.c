/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 12:53:13 by sjang             #+#    #+#             */
/*   Updated: 2016/09/23 12:53:15 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		between;

	i = 0;
	between = 0;
	while (i < n)
	{
		if ((between = (int)(((unsigned char*)s1)[i] -
			((unsigned char*)s2)[i])) != 0)
			return (between);
		i++;
	}
	return (between);
}

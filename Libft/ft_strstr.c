/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:24:13 by sjang             #+#    #+#             */
/*   Updated: 2016/09/23 17:24:14 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int i;
	int lenlittle;
	int lenbig;

	i = 0;
	lenlittle = ft_strlen(little);
	lenbig = ft_strlen(big);
	while (ft_strncmp(big + i, little, lenlittle) != 0)
	{
		if (big[i] == 0 || i + lenlittle >= lenbig)
			return ((char*)NULL);
		i++;
	}
	return ((char*)(big + i));
}

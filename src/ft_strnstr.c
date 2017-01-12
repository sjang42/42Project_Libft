/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:24:01 by sjang             #+#    #+#             */
/*   Updated: 2016/09/23 17:24:02 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lenbig;
	size_t	lenlittle;

	i = 0;
	lenbig = ft_strlen((char*)big);
	lenlittle = ft_strlen((char*)little);
	if (len < lenlittle)
		return (NULL);
	while (ft_strncmp(big + i, little, lenlittle) != 0 && i < len)
	{
		if (big[i] == 0 || i + lenlittle >= lenbig ||
			i + lenlittle >= len)
			return ((char*)NULL);
		i++;
	}
	return ((char*)big + i);
}

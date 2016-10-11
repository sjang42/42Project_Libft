/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:31:56 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:31:57 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	int i;
	int result;

	if (s1 == NULL || s2 == NULL)
		return (0);
	i = 0;
	result = 0;
	while (result == 0)
	{
		if (s1[i] == 0 && s2[i] == 0)
			return (1);
		result = s1[i] - s2[i];
		i++;
	}
	return (0);
}

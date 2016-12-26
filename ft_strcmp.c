/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:22:57 by sjang             #+#    #+#             */
/*   Updated: 2016/09/23 17:22:58 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (result == 0)
	{
		if (s1[i] == 0 && s2[i] == 0)
			return (result);
		result = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}
	return (result);
}

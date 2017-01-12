/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:23:48 by sjang             #+#    #+#             */
/*   Updated: 2016/09/23 17:23:49 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (result == 0 && i < n)
	{
		if (s1[i] == 0 && s2[i] == 0)
			return (result);
		result = (unsigned char)(s1[i]) - (unsigned char)(s2[i]);
		i++;
	}
	return (result);
}

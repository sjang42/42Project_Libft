/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:23:18 by sjang             #+#    #+#             */
/*   Updated: 2016/09/23 17:23:19 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_strlen_copy(const char *str)
{
	int count;

	count = 0;
	while (str[count] != 0)
		count++;
	return (count);
}

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t sizedst;

	i = 0;
	sizedst = 0;
	while (dst[i] != 0 && i < size)
		i++;
	if (dst[i] != 0)
		return ((size_t)ft_strlen_copy(src) + i);
	sizedst = i;
	while (i < size - 1)
	{
		dst[i] = src[i - sizedst];
		i++;
	}
	dst[i] = 0;
	return ((size_t)ft_strlen_copy(src) + sizedst);
}

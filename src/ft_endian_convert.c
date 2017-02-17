/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_endian_convert.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/15 18:46:32 by sjang             #+#    #+#             */
/*   Updated: 2017/02/15 18:46:33 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_endian_convert(void *src, size_t size)
{
	size_t	i;
	char	*src_cp;
	char	tmp;

	src_cp = (char*)src;
	i = 0;
	while (i < size / 2)
	{
		tmp = src_cp[size - 1 - i];
		src_cp[size - 1 - i] = src_cp[i];
		src_cp[i] = tmp;
		i++;
	}
	return (0);
}

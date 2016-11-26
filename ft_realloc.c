/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/26 02:08:15 by sjang             #+#    #+#             */
/*   Updated: 2016/11/26 02:08:23 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void			*ft_realloc(void *some, size_t size_cur, size_t size_fut)
{
	void *new;

	new = malloc(sizeof(size_fut));
	if (size_cur <= size_fut)
		ft_memcpy(new, some, size_cur);
	else
		ft_memcpy(new, some, size_fut);
	free(some);
	return (new);
}

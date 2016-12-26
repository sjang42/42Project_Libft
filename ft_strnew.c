/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:35:04 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:35:06 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnew(size_t size)
{
	char *fresh;

	fresh = (char*)malloc(size + 1);
	if (fresh == NULL)
		return (NULL);
	ft_bzero(fresh, size + 1);
	return (fresh);
}

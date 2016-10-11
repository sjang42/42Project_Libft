/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:31:25 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:31:26 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*fresh;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	fresh = (char*)malloc(sizeof(char) * (len + 1));
	if (fresh == NULL)
		return (NULL);
	memcpy(fresh, s1, ft_strlen(s1));
	memcpy(fresh + ft_strlen(s1), s2, ft_strlen(s2));
	fresh[len] = 0;
	return (fresh);
}

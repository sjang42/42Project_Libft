/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:36:18 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:36:20 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*fresh;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	fresh = (char*)malloc(sizeof(char) * (len + 1));
	if (fresh == 0)
		return (NULL);
	while (i < len)
	{
		fresh[i] = f(s[i]);
		i++;
	}
	fresh[i] = 0;
	return (fresh);
}

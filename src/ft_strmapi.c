/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:30:51 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:30:52 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*fresh;

	if (s == NULL || f == NULL)
		return (NULL);
	i = 0;
	len = (unsigned int)ft_strlen(s);
	fresh = (char*)malloc(sizeof(char) * (len + 1));
	if (fresh == 0)
		return (0);
	while (i < len)
	{
		fresh[i] = f(i, s[i]);
		i++;
	}
	fresh[i] = 0;
	return (fresh);
}

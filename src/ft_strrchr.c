/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/23 17:24:08 by sjang             #+#    #+#             */
/*   Updated: 2016/09/23 17:24:09 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int flag;
	int position;

	i = 0;
	flag = 0;
	while (1)
	{
		if (s[i] == c)
		{
			position = i;
			if (flag == 0)
				flag = 1;
		}
		if (s[i] == 0)
		{
			if (flag == 1)
				return ((char*)s + position);
			else
				return (NULL);
		}
		i++;
	}
}

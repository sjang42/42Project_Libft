/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:36:52 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:36:53 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_word(char const *s, char c)
{
	int countword;
	int i;

	i = 0;
	countword = 0;
	while (s[i] != 0)
	{
		while (s[i] == c)
			i++;
		if (s[i] != 0)
			countword++;
		while (s[i] != c && s[i] != 0)
			i++;
	}
	return (countword);
}

static char	**make_char(char const *s, char c, char **fresh, int i)
{
	int index;
	int countchar;
	int pos;

	index = 0;
	while (index < ft_count_word(s, c))
	{
		countchar = 0;
		while (s[i] == c)
			i++;
		pos = i;
		while (s[i] != c && s[i] != 0)
		{
			countchar++;
			i++;
		}
		fresh[index] = (char*)malloc(sizeof(char) * (countchar + 1));
		if (fresh[index] == NULL)
			return (NULL);
		memcpy(fresh[index], s + pos, countchar);
		fresh[index][countchar] = 0;
		index++;
	}
	return (fresh);
}

char		**ft_strsplit(char const *s, char c)
{
	int		countword;
	char	**fresh;

	if (s == NULL)
		return (NULL);
	countword = ft_count_word(s, c);
	fresh = (char**)malloc(sizeof(char*) * (countword + 1));
	if (fresh == NULL)
		return (NULL);
	fresh[countword] = 0;
	if (make_char(s, c, fresh, 0) == 0)
		return (0);
	return (fresh);
}

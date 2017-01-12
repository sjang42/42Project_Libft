/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/24 23:33:39 by sjang             #+#    #+#             */
/*   Updated: 2016/09/24 23:33:40 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static int	ft_countbeg(char const *s, int *len)
{
	int countbeg;

	countbeg = 0;
	while (s[countbeg] == ' ' || s[countbeg] == '\t' || s[countbeg] == '\n')
		countbeg++;
	*len = countbeg;
	return (countbeg);
}

static int	ft_countend(char const *s, int *len)
{
	int i;
	int endpos;
	int countend;

	i = *len;
	endpos = i - 1;
	while (s[i] != 0)
	{
		if (s[i] != ' ' && s[i] != '\t' && s[i] != '\n')
			endpos = i;
		i++;
	}
	countend = (i - 1) - endpos;
	*len = i;
	return (countend);
}

char		*ft_strtrim(char const *s)
{
	int		countbeg;
	int		countend;
	char	*fresh;
	int		len;
	int		totallen;

	if (s == NULL)
		return (NULL);
	countbeg = ft_countbeg(s, &len);
	countend = ft_countend(s, &len);
	if (countbeg == len - 1)
		totallen = 0;
	else
		totallen = len - countbeg - countend;
	fresh = (char*)malloc(sizeof(char) * (totallen + 1));
	if (fresh == NULL)
		return (NULL);
	if (totallen == 0)
		fresh[0] = 0;
	else
	{
		ft_memcpy(fresh, s + countbeg, len - countbeg - countend);
		fresh[len - countbeg - countend] = 0;
	}
	return (fresh);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_all.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 18:36:25 by sjang             #+#    #+#             */
/*   Updated: 2017/01/16 18:36:26 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int			ft_read_all(const int fd, char **str)
{
	char	*temp;
	char	arr[100];
	int		size;
	int		sizeall;

	ft_bzero(arr, 100);
	size = 0;
	sizeall = 0;
	while ((size = read(fd, arr, 100)) != 0)
	{
		if (size == -1)
			RETRUN_ERROR(-1);
		temp = (char*)malloc(sizeof(char) * (sizeall + 1));
		ft_memcpy(temp, *str, sizeall);
		if (sizeall)
			free(*str);
		*str = (char*)malloc(sizeof(char) * (sizeall + size + 1));
		ft_memcpy(*str, temp, sizeall);
		ft_memcpy(*str + sizeall, arr, size);
		(*str)[sizeall + size] = 0;
		free(temp);
		sizeall += size;
	}
	return (sizeall);
}

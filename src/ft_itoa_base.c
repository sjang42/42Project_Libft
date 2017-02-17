/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 19:55:22 by sjang             #+#    #+#             */
/*   Updated: 2017/02/09 19:55:23 by sjang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

static char		*deal_zero(void)
{
	char *str;

	str = (char*)malloc(sizeof(char) * 2);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

static	int		get_size(int value, int base)
{
	int result;
	int size;

	size = 0;
	result = value;
	while (result != 0)
	{
		result /= base;
		size++;
	}
	return (size);
}

static void		fill_str(int valbase[], char *str, int minusflag, int size)
{
	int result;
	int mod;
	int i;
	int value;
	int base;

	value = valbase[0];
	base = valbase[1];
	result = value;
	i = 1;
	while (i <= size - minusflag)
	{
		mod = result % base;
		if (value < 0)
			mod *= -1;
		if (mod < 10)
			str[size - i] = '0' + mod;
		else
			str[size - i] = 'a' + mod - 10;
		result /= base;
		i++;
	}
}

char			*ft_itoa_base(int value, int base)
{
	int		size;
	int		minusflag;
	char	*str;
	int		valbase[2];

	if (value == 0)
		return (deal_zero());
	size = get_size(value, base);
	minusflag = ((value < 0) && base == 10) ? 1 : 0;
	if (minusflag)
		size++;
	str = (char*)malloc(sizeof(char) * (size + 1));
	if (minusflag)
		str[0] = '-';
	str[size] = 0;
	valbase[0] = value;
	valbase[1] = base;
	fill_str(valbase, str, minusflag, size);
	return (str);
}

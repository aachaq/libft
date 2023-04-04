/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 01:06:42 by aachaq            #+#    #+#             */
/*   Updated: 2022/01/31 12:54:04 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static long	ft_len(long n)
{
	long	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*ft_string(long number, long len)
{
	long		s;
	char		*rtn;
	long		i;
	long		num;

	s = 0;
	if (number < 0)
	{
		num = number;
		s = 1;
		number = number * -1;
	}
	i = len;
	rtn = malloc(sizeof(char) * (len + 1));
	if (!rtn)
		return (NULL);
	while (number > 0)
	{
		rtn[--len] = 48 + number % 10;
		number = number / 10;
		if (number == 0 && s == 1)
			rtn[--len] = '-';
	}
	rtn[i] = '\0';
	return (rtn);
}

char	*ft_itoa(int n)
{
	long		len;
	char		*rtn2;

	if (n == 0)
		return (ft_strdup ("0"));
	len = ft_len(n);
	rtn2 = (ft_string(n, len));
	return (rtn2);
}

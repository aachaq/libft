/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 18:50:43 by aachaq            #+#    #+#             */
/*   Updated: 2022/02/10 04:47:08 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_long(int i)
{
	if (i == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				signe;
	unsigned long	n;

	n = 0;
	signe = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - 48);
		if (n > 9223372036854775807)
			return (ft_long(signe));
		i++;
	}
	return (n * signe);
}

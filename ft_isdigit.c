/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:29:19 by aachaq            #+#    #+#             */
/*   Updated: 2021/11/15 23:33:11 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
int	ft_isdigit(int	c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	i;

	i = 'd';
	printf("%d\n", ft_isdigit(i));
	printf("%d\n", isdigit(i));
	return (0);
}

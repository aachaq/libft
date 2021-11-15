/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 23:42:38 by aachaq            #+#    #+#             */
/*   Updated: 2021/11/15 23:59:34 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
int	ft_isalnum(int	c)
{
	if (((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) || (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int	i;

	i = '\n';
	printf("%d\n", ft_isalnum(i));
	printf("%d\n", isalnum(i));
	return (0);
}

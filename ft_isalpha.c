/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:41:24 by aachaq            #+#    #+#             */
/*   Updated: 2021/11/15 22:23:43 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>
int	ft_isalpha(int	c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

int	main(void)
{
	int i;

	i = '\n';
	printf("%d\n", ft_isalpha(i));
	printf("%d\n", isalpha(i));
	return (0);
}

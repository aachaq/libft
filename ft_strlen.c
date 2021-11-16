/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 22:44:51 by aachaq            #+#    #+#             */
/*   Updated: 2021/11/16 23:30:24 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const	char	*s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

int main(void)
{
	const 	char	i[5] = "abcd";
	printf("%zu\n", ft_strlen(i));
	printf("%zu\n", strlen(i));
	return (0);
}

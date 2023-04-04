/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 23:52:42 by aachaq            #+#    #+#             */
/*   Updated: 2022/02/01 18:17:02 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned	int, char))
{
	char				*s1;
	unsigned int		i;

	if (!s)
		return (NULL);
	s1 = malloc(ft_strlen(s) + 1);
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s1[i] = (*f)(i, (char)s[i]);
		i++ ;
	}
	s1[i] = '\0';
	return (s1);
}

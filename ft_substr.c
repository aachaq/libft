/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 19:28:07 by aachaq            #+#    #+#             */
/*   Updated: 2021/12/21 20:48:27 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*s1;

	if (!s)
		return (NULL);
	i = 0;
	l = ft_strlen(s + start);
	if (l < len)
		len = l;
	s1 = (char *)malloc(len + 1);
	if (!s1)
		return (NULL);
	while (s[i] != '\0' && len > i && start <= ft_strlen(s))
	{
		s1[i] = s[start];
		i++;
		start++;
	}
	s1[i] = '\0';
	return (s1);
}

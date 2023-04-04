/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 19:17:39 by aachaq            #+#    #+#             */
/*   Updated: 2021/12/05 06:54:41 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t destsize)
{
	size_t	i;

	i = 0;
	if (destsize < 1)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (destsize - 1))
	{
		dst[i] = src[i];
		i++ ;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

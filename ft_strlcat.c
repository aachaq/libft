/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 19:24:21 by aachaq            #+#    #+#             */
/*   Updated: 2022/02/10 15:40:06 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	s;
	size_t	d;
	size_t	i;
	size_t	j;

	if (!src)
		return (0);
	s = ft_strlen(src);
	if (!dst || !dstsize)
		return (s);
	d = ft_strlen(dst);
	i = 0;
	j = 0;
	if (dstsize < d)
		return (s + dstsize);
	while (src[j] != '\0' && (d + i) < dstsize - 1)
	{
		dst[d + i] = src[j];
		j++;
		i++;
	}
	dst[d + i] = '\0';
	return (s + d);
}

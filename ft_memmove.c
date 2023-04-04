/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:44:02 by aachaq            #+#    #+#             */
/*   Updated: 2022/02/07 02:46:45 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void	*dst, const	void	*src, size_t	len)
{
	unsigned char	*srce;
	unsigned char	*dest;
	size_t			j;

	srce = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (dest > srce)
	{
		while (len-- > 0)
		{
			dest[len] = srce[len];
		}
	}
	else
	{
		j = 0;
		while (j < len)
		{
			dest[j] = srce[j];
			j++;
		}
	}
	return (dst);
}

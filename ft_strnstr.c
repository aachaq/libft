/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:22:56 by aachaq            #+#    #+#             */
/*   Updated: 2022/02/07 02:49:24 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (haystack[i + j] && needle[j] && (size_t)(i + j) < len)
	{
		if (needle[j] == haystack[i + j])
			j++;
		else
		{
			j = 0;
			++i;
		}				
	}
	if (!needle[j])
		return ((char *)(haystack + i));
	return (0);
}

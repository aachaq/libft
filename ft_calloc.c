/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:54:47 by aachaq            #+#    #+#             */
/*   Updated: 2021/12/09 15:10:08 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*re;

	re = malloc(count * size);
	if (!re)
		return (NULL);
	ft_memset(re, 0, count * size);
	return (re);
}

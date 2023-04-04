/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:21:46 by aachaq            #+#    #+#             */
/*   Updated: 2022/02/07 02:52:43 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_start(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[i]) == NULL)
			break ;
		i++;
	}
	return (i);
}

size_t	ft_end(const char *s1, const char *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (i < len)
	{
		if (ft_strchr(set, s1[len - i - 1]) == 0)
			break ;
		i++;
	}
	return (len - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	t_variables	var_g;

	if (!s1)
		return (NULL);
	var_g.s = 0;
	var_g.i = ft_start(s1, set);
	if (var_g.i == ft_strlen(s1))
		return (ft_strdup(""));
	var_g.j = ft_end(s1, set);
	var_g.len = var_g.j - var_g.i;
	if (!set)
		return ((char *)s1);
	var_g.sreturn = malloc(sizeof(char) * (var_g.len + 1));
	if (!var_g.sreturn)
		return (NULL);
	while (var_g.i < var_g.j)
	{
		var_g.sreturn[var_g.s] = ((char )(s1[var_g.i]));
		(var_g.i)++;
		(var_g.s)++;
	}
	var_g.sreturn[var_g.s] = '\0';
	return (var_g.sreturn);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aachaq <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:31:36 by aachaq            #+#    #+#             */
/*   Updated: 2022/02/01 22:21:55 by aachaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_words(const char *s1, char c)
{
	size_t	i;
	size_t	r;

	i = 0;
	r = 0;
	while (s1[i])
	{
		if (s1[i] == c)
			i++;
		else
		{	
			r++;
			while (s1[i] != c && s1[i] != '\0')
				i++;
		}
	}
	return (r);
}

char	**ft_free(char **s, int i)
{
	while (i >= 0)
	{
		free(s[i]);
		i--;
	}
	free (s);
	return (0);
}

char	**ft_alloc(char **split, const char *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	a;

	i = 0;
	k = 0;
	while (s[i] && k < count_words(s, c))
	{
		if (s[i] == c)
			i++;
		else if (s[i] != c && s[i] != '\0')
		{
			a = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			split[k] = ft_substr(s, a, i - a);
			if (!split[k])
				return (ft_free(split, k));
			k++;
		}
	}
	split[k] = 0;
	return (split);
}

char	**ft_split(char const*s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	return (ft_alloc(split, s, c));
}

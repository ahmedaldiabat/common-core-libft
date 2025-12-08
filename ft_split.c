/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 00:23:33 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/12/03 17:56:40 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	countword(char *s, char c)
{
	size_t	i;
	size_t	word;

	word = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (word);
}

char	*copyword(char *str, size_t start, size_t last)
{
	char	*res;
	size_t	i;

	res = malloc (last - start + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (start < last)
		res[i++] = str[start++];
	res[i] = '\0';
	return (res);
}

int	skip(char *s, size_t i, char c)
{
	while (s[i] == c)
		i++;
	return (i);
}

int	skip2(char *s, size_t i, char c)
{
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;
	size_t	j;
	size_t	start;

	res = malloc (sizeof(char *) * (countword((char *)s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i = skip ((char *)s, i, c);
		if (s[i])
		{
			start = i;
			i = skip2 ((char *)s, i, c);
			res[j] = copyword((char *)s, start, i);
			if (!res[j])
				return (NULL);
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}

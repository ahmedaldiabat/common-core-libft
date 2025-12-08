/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 20:07:21 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/11/29 21:26:01 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	check(char c, char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	first;
	size_t	last;
	size_t	i;

	if (!set || !s1)
		return (NULL);
	first = 0;
	while (check(s1[first], (char *)set) && s1[first])
		first++;
	last = ft_strlen(s1) - 1;
	while (check(s1[last], (char *)set) && last > first)
		last--;
	res = malloc (last - first + 2);
	if (!res)
		return (NULL);
	i = 0;
	while (first <= last)
		res[i++] = s1[first++];
	res[i] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 00:44:10 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/12/08 19:46:59 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	if ((char)c == '\0')
		return ((char *)(str + i));
	while (i > 0)
	{
		i--;
		if (str[i] == (char)c)
			return ((char *)(str + i));
	}
	return (NULL);
}

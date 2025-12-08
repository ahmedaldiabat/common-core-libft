/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 01:23:08 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/12/08 19:51:55 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const unsigned char	*s;
	size_t				i;

	i = 0;
	s = (const unsigned char *)str;
	while (i < n)
	{
		if ((unsigned char)c == s[i])
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

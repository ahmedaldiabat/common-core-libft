/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 22:43:00 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/11/28 02:23:06 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_l;
	size_t	s_l;
	size_t	i;

	d_l = ft_strlen(dest);
	s_l = ft_strlen(src);
	if (size == 0)
		return (s_l);
	if (size <= d_l)
		return (size + s_l);
	i = 0;
	while (i < s_l && d_l + i < size - 1)
	{
		dest[d_l + i] = src[i];
		i++;
	}
	dest[d_l + i] = '\0';
	return (d_l + s_l);
}

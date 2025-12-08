/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 04:09:58 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/12/08 21:14:29 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	len(int n)
{
	int	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*res;
	long int	nb;

	i = len(n);
	nb = n;
	if (n < 0)
		i++;
	res = malloc (i + 1);
	if (!res)
		return (NULL);
	res[i] = '\0';
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		res[0] = '0';
	while (nb > 0)
	{
		res[--i] = (nb % 10) + '0';
		nb /= 10;
	}
	return (res);
}

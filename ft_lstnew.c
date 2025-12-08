/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 16:25:33 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/12/08 18:40:12 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*sw7;

	sw7 = (t_list *)malloc(sizeof(t_list));
	if (!sw7)
		return (NULL);
	sw7->content = content;
	sw7->next = NULL;
	return (sw7);
}

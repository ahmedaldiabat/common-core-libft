/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:19:04 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/12/08 18:41:43 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int main(void)
{
    t_list *list = NULL;
    t_list *n1 = ft_lstnew("A");
    t_list *n2 = ft_lstnew("B");
    t_list *n3 = ft_lstnew("C");
    ft_lstadd_front(&list, n1);
    ft_lstadd_front(&list, n2);
    ft_lstadd_front(&list, n3);
    printf("List size: %d\n", ft_lstsize(list));
}*/

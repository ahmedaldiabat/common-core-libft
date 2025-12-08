/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 19:28:47 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/12/04 21:28:13 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
/*
int main(void)
{
    t_list *list = NULL;

    t_list *N1 = ft_lstnew("Ahmed");
    t_list *N2 = ft_lstnew("Bomb");
    t_list *N3 = ft_lstnew("Charr");

    ft_lstadd_back(&list, N1);
    ft_lstadd_back(&list, N2);
    ft_lstadd_back(&list, N3);
    t_list *tmp = list;
    while (tmp)
    {
        printf("%s\n", (char *)tmp->content);
        tmp = tmp->next;
    }
}
*/

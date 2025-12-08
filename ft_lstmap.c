/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 23:39:37 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/12/08 19:24:45 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
void    del(void *content)
{
    free(content);
}
void    *double_value(void *content)
{
    int *new_num = malloc(sizeof(int));
    if (!new_num)
        return NULL;
    *new_num = *(int *)content * 2;
    return new_num;
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*node;

	list = NULL;
	if (!f || !lst)
		return (NULL);
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&list, del);
			return (NULL);
		}
		ft_lstadd_back(&list, node);
		lst = lst->next;
	}
	return (list);
}
/*
int main(void)
{
    t_list *list = NULL;
    t_list *mapped;
    t_list *tmp;
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));

    *a = 1;
    *b = 2;
    *c = 3;
    ft_lstadd_back(&list, ft_lstnew(a));
    ft_lstadd_back(&list, ft_lstnew(b));
    ft_lstadd_back(&list, ft_lstnew(c));
    mapped = ft_lstmap(list, double_value, del);
    tmp = mapped;
    while (tmp)
    {
        printf("%d\n", *(int *)tmp->content);
        tmp = tmp->next;
    }

    return 0;
}
*/

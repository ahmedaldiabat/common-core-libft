/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaldiaba <aaldiaba@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:40:27 by aaldiaba          #+#    #+#             */
/*   Updated: 2025/12/08 18:47:41 by aaldiaba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*
void del(void *content)
{
    free(content);
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !*lst)
		return ;
	ft_lstclear(&(*lst)->next, del);
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
/*
int main(void)
{
    t_list *list = NULL;
    t_list *tmp;

    // إنشاء أعداد ديناميكية لكل عقدة
    int *a = malloc(sizeof(int));
    int *b = malloc(sizeof(int));
    int *c = malloc(sizeof(int));

    if (!a || !b || !c)
        return (1);

    *a = 10;
    *b = 20;
    *c = 30;

    // إنشاء قائمة مرتبطة وإضافة العقد
    ft_lstadd_back(&list, ft_lstnew(a));
    ft_lstadd_back(&list, ft_lstnew(b));
    ft_lstadd_back(&list, ft_lstnew(c));

    // طباعة القائمة قبل المسح
    printf("List before clear:\n");
    tmp = list;
    while (tmp)
    {
        printf("%d -> ", *(int *)tmp->content);
        tmp = tmp->next;
    }
    printf("NULL\n");

    // مسح القائمة بالكامل
    ft_lstclear(&list, del);

    // التأكد أن القائمة أصبحت فارغة
    if (!list)
        printf("List after clear: NULL\n");
    else
        printf("Error: list not empty!\n");

    return 0;
}
*/

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *tmp;

    tmp = *lst;
    if (!tmp)
        return ;
    while (tmp != NULL)
    {
        del(tmp->content);
        free(tmp);
        tmp = tmp -> next;
    }
    *lst = tmp;
}
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *tmp;
    (void) f;

    new = NULL;
    while (lst != NULL)
    {
        tmp = ft_lstnew(lst -> content);
        f(lst -> content);
        if (!tmp)
        {
            del(tmp->content);
            free(tmp);
            tmp = new;
            return (NULL);
        }
        tmp -> next = new;
        // f(lst -> content);
        lst = lst -> next;
    }
    return (new);
}
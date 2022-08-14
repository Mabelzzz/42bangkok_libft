#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    // t_list *node;
    // node = malloc(sizeof(t_list));
    if (!lst)
        return (NULL);
    //lst -> content = content;
    while (lst != NULL)
    {
        if (lst -> next == NULL)
            return (lst);
        lst = lst -> next;
    }
    return (NULL);
}
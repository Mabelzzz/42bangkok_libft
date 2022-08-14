#include "libft.h"

t_list *ft_lstnew(void *content)
{
    // if (!content)
    //     return (NULL);
    t_list *node;
    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node -> content = content;
    node -> next = NULL;
    return (node);
}
#include "libft.h"

size_t get_word(char *start, char **word, int index, char c, int count)
{
    int al;

    al = 0;
    while (word[count][al] != c)
    {
        word[count][al] = start[index];
        index++;
        al++;
    }
    free(word[count]);
    return (al + 1);
}

size_t count_size(char **word, char *s, char c)
{
    char    *start;
    int     i;
    int     count;
    size_t  ml;

    i = 0;
    count = 0;
    ml = 0;
    start = (char *)s;
    while (start[i] != 0)
    {
        if (start[i] == c && start[i + 1] != c && start[i + 1] != 0)
        {
            ml += get_word(start, word, i + 1, c, count);
            count++;
        }
        i++;
    }
    return(ml + 1);
}

char    **ft_split(char const *s, char c)
{
    char **word;

    word = NULL;
    if (!s)
        return (NULL);
    word = (char **)malloc(sizeof(char) * count_size(word, (char *)s, c) + 1);
    if (!word)
        return (NULL);

    
    return (word);
}


// int main(void)
// {
//     char *s = "  Lucky Suki ";
//     char c1 = ' ';
//     char c2 = 'u';

//     printf("%d \n", split(s, c1));
//     printf("%d \n", split(s, c2));
// }
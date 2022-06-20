#include <ctype.h>

int ft_isalpha(int a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
		return (1);
	return (0);
}

int ft_isdigit(int d)
{
    if (d >= '0' && d <= '9')
		return (1);
	return (0);
}

int ft_isalnum(int c)
{
    if(ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
        return (1);
    return (0);
}
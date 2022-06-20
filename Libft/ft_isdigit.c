#include <ctype.h>

int ft_isdigit(int d)
{
    if (d >= '0' && d <= '9')
		return (1);
	return (0);
}

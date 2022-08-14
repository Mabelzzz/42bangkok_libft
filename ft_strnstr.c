/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 22:34:21 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/14 23:28:04 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	compare(char *str, char *to_find, size_t first, size_t len)
{
	size_t	i;

	i = 0;
	while (first < len && to_find[i] != 0)
	{
		if (to_find[i] != str[first])
			return (0);
		if (i == ft_strlen(to_find) - 1 && to_find[i] == str[first])
			return (1);
		i++;
		first++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *to_find, size_t len)
{
	size_t	first;
	char	*str;

	str = (char *)haystack;
	if (*to_find == '\0')
		return ((char *)haystack);
	else
	{
		first = 0;
		while (haystack[first] != 0 && first < len)
		{
			if (haystack[first] == to_find[0])
				if (compare((char *)haystack, (char *)to_find, first, len) == 1)
					return (&str[first]);
			first++;
		}
	}
	return (NULL);
}

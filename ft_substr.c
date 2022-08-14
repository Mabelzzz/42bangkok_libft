/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:42:07 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/14 23:50:16 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*s;
	size_t	index;
	size_t	count;

	if (!str)
		return (NULL);
	index = start;
	count = 0;
	while (index < len && index < ft_strlen(str))
	{
		count++;
		index++;
	}
	s = malloc(sizeof(char) * (count + 1));
	if (!s)
		return (NULL);
	index = 0;
	if (len > 0 && start < ft_strlen(str))
	{
		while (index < len && str[start + index] != 0)
		{
			s[index] = str[start + index];
			index++;
		}
	}
	s[index] = 0;
	return (s);
}

// int main()
// {
// 	char	str[] = "lorem ipsum dolor sit amet";
// 	printf("%s0 \n", ft_substr(str, 7, 10));
// 	printf("%s0 \n", ft_substr(str, 7, 0));
// 	printf("%s0 \n", ft_substr(str, 0, 0));
// 	printf("%s0 \n", ft_substr(str, 400, 20));
// }
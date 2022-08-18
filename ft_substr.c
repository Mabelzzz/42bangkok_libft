/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:42:07 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/15 22:57:15 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	cnt_size(char const *str, unsigned int start, size_t len)
{
	size_t	index;
	size_t	count;

	index = start;
	count = 0;
	while (index < len + start && index < ft_strlen(str))
	{
		count++;
		index++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	count;
	size_t	index;

	if (!s)
		return (NULL);
	count = cnt_size(s, start, len);
	sub = malloc(sizeof(char) * (count + 1));
	if (!sub)
		return (NULL);
	index = 0;
	if (len > 0 && start < ft_strlen(s))
	{
		while (index < len && s[start + index] != 0)
		{
			sub[index] = s[start + index];
			index++;
		}
	}
	sub[index] = 0;
	return (sub);
}

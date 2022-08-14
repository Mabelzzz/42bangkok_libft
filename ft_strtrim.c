/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:44:22 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/11 23:51:23 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	compare(char c, char const *set)
{
	int	index;

	index = 0;
	while (set[index] != 0)
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

static int	check_start(char const *str, char const *set)
{
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		if (compare(str[index], set) == 0)
			return (index);
		index++;
	}
	return (index);
}

static int	check_end(char const *str, char const *set)
{
	int	index;

	index = ft_strlen(str) - 1;
	while (str[index] != 0)
	{
		if (compare(str[index], set) == 0)
			return (index);
		index--;
	}
	return (index);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		len;
	int		start;
	int		end;
	char	*str;

	if (!s || !set)
		return (NULL);
	start = check_start(s, set);
	end = check_end(s, set);
	len = end - start + 1;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (start <= end && len > 0)
		ft_strlcpy(str, &s[start], len + 1);
	return (str);
}

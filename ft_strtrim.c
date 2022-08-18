/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:44:22 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/15 22:58:57 by pnamwayk         ###   ########.fr       */
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
		if (str[index] == 0)
			return (index - 1);
	}
	return (index);
}

static int	check_end(char const *str, char const *set, int start)
{
	int	index;

	index = ft_strlen(str) - 1;
	while (index >= 0 && index >= start)
	{
		if (compare(str[index], set) == 0)
			return (index);
		index--;
		if (index < 0 || index < start)
			return (index + 1);
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == 0 && *set == 0)
		return (ft_calloc(1, 1));
	start = check_start(s1, set);
	if (start == ((int)ft_strlen(s1) - 1))
		return (ft_calloc(1, 1));
	end = check_end(s1, set, start);
	len = end - start + 1;
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (start <= end && len > 0)
		ft_strlcpy(str, &s1[start], len + 1);
	return (str);
}

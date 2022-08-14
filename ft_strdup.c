/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:32:48 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/11 23:52:47 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new;
	int		index;

	new = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!new)
		return (NULL);
	index = 0;
	while (str[index] != 0)
	{
		new[index] = str[index];
		index++;
	}
	new[index] = 0;
	return (new);
}

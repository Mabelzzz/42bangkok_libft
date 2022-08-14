/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 20:34:18 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/07/03 00:19:12 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int first)
{
	if (*str == (char) first)
		return ((char *) str);
	while (*str++ != '\0')
	{
		if (*str == (char) first)
			return ((char *) str);
	}
	return (NULL);
}

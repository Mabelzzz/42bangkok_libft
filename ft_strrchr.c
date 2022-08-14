/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 21:28:33 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/03 15:13:51 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int last)
{
	size_t	len;

	len = ft_strlen(str);
	if (str[len] == (char) last)
		return ((char *)(str + len));
	while (len-- > 0)
	{
		if (str[len] == (char) last)
			return ((char *)&str[len]);
	}
	return (NULL);
}

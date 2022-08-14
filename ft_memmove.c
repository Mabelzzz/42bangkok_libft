/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 16:00:35 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/14 23:24:28 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*check_overlap(char *dest, char *source, size_t len)
{
	size_t	i;

	if (len != 0 && (dest != 0 || source != 0))
	{
		if (dest < source)
		{
			i = 0;
			while (i < len)
			{
				dest[i] = source[i];
				i++;
			}
		}
		else
		{
			i = len;
			while (i > 0)
			{
				dest[i - 1] = source[i - 1];
				i--;
			}			
		}
	}
	return (dest);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;

	if (dst == 0 && src == 0)
		return (NULL);
	dest = check_overlap((char *)dst, (char *)src, len);
	return (dest);
}

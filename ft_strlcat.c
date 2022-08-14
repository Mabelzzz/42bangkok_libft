/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 16:53:19 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/14 23:25:31 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstsize == 0)
		return (ft_strlen(src));
	else if (dstsize < dstlen + 1)
		return (dstsize + ft_strlen(src));
	index = 0;
	while (index < (dstsize - dstlen - 1) && src[index] != 0)
	{
		dst[index + dstlen] = src[index];
		index++;
	}
	dst[index + dstlen] = '\0';
	return (dstlen + ft_strlen(src));
}

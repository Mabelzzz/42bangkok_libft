/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 21:15:03 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/16 11:04:12 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		diff;
	size_t	i;

	diff = 0;
	i = 0;
	while (i < n)
	{
		diff = (*(unsigned char *)(s1 + i)) - (*(unsigned char *)(s2 + i));
		if (diff != 0)
			return (diff);
		i++;
	}
	return (diff);
}

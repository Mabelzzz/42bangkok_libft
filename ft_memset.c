/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <pnamwayk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 19:11:26 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/06 19:18:50 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int val, size_t len)
{
	size_t				index;
	unsigned char		*ptr;

	index = 0;
	ptr = str;
	while (index < len)
	{
		ptr[index++] = val;
	}
	return (str);
}

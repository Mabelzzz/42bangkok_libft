/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:42:12 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/14 23:42:16 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	power_ten(int n)
{
	int	p;	

	p = 1;
	if (n != 0)
	{
		while (n >= 1)
		{
			p *= 10;
			n--;
		}
		return (p);
	}
	else
	{
		return (1);
	}
}

static int	count_nbr(int nb)
{
	int	c;

	c = 0;
	if (nb < 0)
		c = 1;
	while (c <= 10)
	{
		nb = nb / 10;
		c++;
		if (nb == 0)
		{
			break ;
		}
	}
	return (c);
}

static void	get_nbr(long nb, int count, int i, char *str)
{
	long	nb1;

	nb1 = 0;
	while (count >= 1)
	{
		nb1 = nb / power_ten(count - 1);
		str[i] = nb1 % 10 + '0';
		count--;
		i++;
	}
	str[i] = 0;
}

char	*ft_itoa(int nb)
{
	char	*str;
	int		count;
	long	nb1;

	nb1 = nb;
	count = count_nbr(nb);
	str = malloc(sizeof(char) * count + 1);
	if (!str)
		return (NULL);
	if (nb1 >= 0 && nb1 <= 2147483647)
		get_nbr(nb1, count, 0, str);
	else if (nb1 < 0 && nb1 >= -2147483648)
	{
		str[0] = '-';
		nb1 *= -1;
		get_nbr(nb1, count - 1, 1, str);
	}
	return (str);
}

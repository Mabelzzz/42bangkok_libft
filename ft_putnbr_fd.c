/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <pnamwayk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 21:34:19 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/08/08 21:53:48 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	power_ten(int n)
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

int	count_nbr(int nb)
{
	int	c;

	c = 0;
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

void	show_nbr(int nb, int count, int fd)
{
	int	nb1;

	nb1 = 0;
	while (count >= 1)
	{
		nb1 = nb / power_ten(count - 1);
		ft_putchar_fd(nb1 % 10 + '0', fd);
		count--;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb >= 0 && nb <= 2147483647)
	{
		show_nbr(nb, count_nbr(nb), fd);
	}
	else if (nb < 0 && nb > -2147483648)
	{
		ft_putchar_fd('-', fd);
		show_nbr(-nb, count_nbr(-nb), fd);
	}
	else if (nb == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
	}
}

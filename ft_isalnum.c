/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnamwayk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 19:19:23 by pnamwayk          #+#    #+#             */
/*   Updated: 2022/07/02 21:16:28 by pnamwayk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int alnum)
{
	if (alnum >= '0' && alnum <= '9')
		return (1);
	else if (alnum >= 'a' && alnum <= 'z')
		return (1);
	else if (alnum >= 'A' && alnum <= 'Z')
		return (1);
	return (0);
}

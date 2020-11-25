/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 16:38:20 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/23 19:02:44 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int sym;

	if (n / 10 == 0)
	{
		if (n % 10 < 0)
		{
			sym = n % 10 * -1 + '0';
			write(fd, "-", 1);
		}
		else
			sym = n % 10 + '0';
		write(fd, &sym, 1);
		return ;
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		if (n % 10 < 0)
			sym = n % 10 * -1 + '0';
		else
			sym = n % 10 + '0';
		write(fd, &sym, 1);
	}
}

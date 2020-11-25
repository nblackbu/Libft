/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:33:58 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/23 17:14:14 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int		i;
	int		minus;
	size_t	nb;

	minus = 1;
	i = 0;
	nb = 0;
	while (str[i] && ((str[i] > 8 && str[i] < 14) || str[i] == 32))
		i++;
	if ((str[i] == '-' || str[i] == '+') && str[i])
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i] && (str[i] > 47 && str[i] < 58))
	{
		if ((nb > 2147483647) && (minus == 1))
			return (-1);
		if ((nb > 2147483648) && (minus == -1))
			return (0);
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * minus);
}

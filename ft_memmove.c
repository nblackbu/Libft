/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:37:56 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/21 20:17:55 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*l;
	size_t			i;

	i = 0;
	p = (unsigned char *)dst;
	l = (unsigned char *)src;
	if (p == l || n == 0)
		return (p);
	if (p < l)
		while (i < n)
		{
			p[i] = l[i];
			i++;
		}
	else
		while (n--)
			p[n] = l[n];
	return (p);
}

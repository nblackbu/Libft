/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:22:37 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/21 20:02:47 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	*l;
	size_t			i;

	i = 0;
	p = (unsigned char *)dst;
	l = (unsigned char *)src;
	c = (unsigned char)c;
	while (i < len)
	{
		p[i] = l[i];
		if (p[i] == c)
			return (dst + ++i);
		i++;
	}
	return (NULL);
}

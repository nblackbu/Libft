/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:28:09 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/21 20:03:57 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*l;

	i = 0;
	p = (unsigned char *)dst;
	l = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < len)
	{
		p[i] = l[i];
		i++;
	}
	return (dst);
}

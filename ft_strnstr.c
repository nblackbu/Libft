/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:57:33 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/23 18:58:30 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hayst, const char *need, size_t n)
{
	size_t i;
	size_t j;

	if (!*need)
		return ((char *)hayst);
	i = 0;
	while (i < n && hayst[i])
	{
		j = 0;
		if (hayst[i] == need[j])
		{
			while (hayst[i + j] == need[j] && (i + j) < n)
			{
				j++;
				if (need[j] == 0)
					return ((char*)&hayst[i]);
			}
		}
		i++;
	}
	return (NULL);
}

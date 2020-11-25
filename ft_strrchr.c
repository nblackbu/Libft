/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 17:02:57 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/22 16:05:42 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*y;

	i = ft_strlen(str);
	y = NULL;
	while (i > 0 && str[i] != c)
		i--;
	if (str[i] == c)
		y = &((char*)str)[i];
	return (y);
}

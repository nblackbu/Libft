/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 13:46:30 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/22 17:15:27 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*mystring;
	size_t	i;
	size_t	start1;

	i = 0;
	start1 = (size_t)start;
	if (!s)
		return (ft_strdup(""));
	if (start1 >= ft_strlen(s))
		return (ft_strdup(""));
	mystring = (char*)malloc(len + 1);
	if (mystring == NULL)
		return (NULL);
	while (i < len && s[i + start1])
	{
		mystring[i] = s[i + start1];
		i++;
	}
	mystring[i] = '\0';
	return (mystring);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:32:56 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/23 22:22:07 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_subrim(int j, int end, char const *s1, char const *set)
{
	int		i;
	char	*short_str;

	i = 0;
	while (end >= 0 && s1[end] && set[i])
		if (s1[end] == set[i])
		{
			end--;
			i = 0;
		}
		else
			i++;
	i = 0;
	if (j > end)
		return (ft_strdup(""));
	if ((short_str = (char*)malloc(end - j + 2)) == NULL)
		return (NULL);
	while (i <= end - j)
	{
		short_str[i] = s1[j + i];
		i++;
	}
	short_str[i] = '\0';
	return (short_str);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	end;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	while (s1[j] && set[i])
	{
		if (s1[j] == set[i])
		{
			j++;
			i = 0;
		}
		else
			i++;
	}
	return (ft_subrim(j, end, s1, set));
}

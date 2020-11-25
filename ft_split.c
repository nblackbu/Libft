/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackbu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 18:38:11 by nblackbu          #+#    #+#             */
/*   Updated: 2020/11/24 00:29:43 by nblackbu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **mass, int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		free(mass[i]);
		i++;
	}
	free(mass);
	return (NULL);
}

static char	**ft_splitting(const char *s, char delim, int str, char **splitted)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] && j < str)
	{
		while (s[i] && s[i] == delim)
			i++;
		while (s[i] && s[i] != delim)
		{
			splitted[j][k] = s[i];
			i++;
			k++;
		}
		splitted[j][k] = '\0';
		j++;
		k = 0;
	}
	splitted[j] = NULL;
	return (splitted);
}

static char	**ft_str_malloc(char const *s, char delim, int str, char **split)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	len = 0;
	while (s[i] && j < str)
	{
		while (s[i] && s[i] == delim)
			i++;
		while (s[i] && s[i] != delim)
		{
			i++;
			len++;
		}
		split[j] = (char *)malloc(len + 1);
		if (split[j] == NULL)
			return (ft_free(split, j));
		j++;
		len = 0;
	}
	return (ft_splitting(s, delim, str, split));
}

static char	**ft_massive_malloc(char const *s, char delim, int str)
{
	char **tab;

	tab = (char **)malloc(sizeof(char *) * (str + 1));
	if (tab == NULL)
		return (NULL);
	return (ft_str_malloc(s, delim, str, tab));
}

char		**ft_split(char const *s, char delim)
{
	int		i;
	int		str;

	i = 0;
	str = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == delim)
			i++;
		if (s[i])
			str++;
		while (s[i] && s[i] != delim)
			i++;
	}
	return (ft_massive_malloc(s, delim, str));
}

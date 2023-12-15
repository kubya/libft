/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 00:03:40 by ndesques          #+#    #+#             */
/*   Updated: 2023/11/09 00:03:40 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strnum(char *str, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			res++;
			while (str[i] && str[i] != c)
				i++;
			if (str[i] == '\0')
				return (res);
		}
		i++;
	}
	return (res);
}

static void	ft_strcpy(char *dest, char *str, char c, int j)
{
	int	i;

	i = 0;
	while (str[j] && str[j] == c)
		j++;
	while (str[j + i] && str[j + i] != c)
	{
		dest[i] = str[j + i];
		i++;
	}
	dest[i] = '\0';
}

static char	*ft_walloc(char *str, char c, int *j)
{
	char	*dest;
	int		i;

	i = *j;
	dest = NULL;
	while (str[*j])
	{
		if (str[*j] != c)
		{
			while (str[*j] && str[*j] != c)
				*j += 1;
			dest = (char *)malloc((*j - i + 1) * sizeof(char));
			if (dest == NULL)
				return (NULL);
			break ;
		}
		*j += 1;
	}
	ft_strcpy(dest, str, c, i);
	return (dest);
}

static void	ft_free(char *strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings);
		i++;
	}
	free(strings);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (str == NULL)
		return (NULL);
	i = 0;
	j = ft_strnum((char *)str, c);
	k = 0;
	tab = (char **)malloc((j + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	tab[j] = NULL;
	while (i < j)
	{
		tab[i] = ft_walloc(((char *)str), c, &k);
		if (!tab[i])
			ft_free(tab[i]);
		i++;
	}
	return (tab);
}

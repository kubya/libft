/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:07:41 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/22 17:07:41 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*handler(char const *s, unsigned int start)
{
	if (s == NULL)
		return (NULL); 
	if ((size_t)ft_strlen(s) < start)
		return (ft_strdup(""));
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	if (s == NULL || (size_t)ft_strlen(s) < start)
		return (handler(s, start));
	if ((size_t)ft_strlen(s + start) < len)
		len = (size_t)ft_strlen(s + start);
	str = (char *)malloc((len + 1) * sizeof(*s));
	if (str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}

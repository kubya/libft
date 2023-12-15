/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:47:57 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/30 14:47:57 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		len;
	int		i;
	char	*str;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > 0 && s1[len - 1] && ft_strchr(set, s1[len - 1]) && len > i)
		len--;
	if (len < i)
		len = i;
	str = (char *)malloc((len - i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, &s1[i], len - i + 1);
	return (str);
}

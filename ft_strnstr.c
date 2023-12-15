/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 03:45:46 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/22 03:45:46 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *src, size_t num)
{
	size_t		i;
	size_t		y;

	if (!src[0])
		return ((char *)str);
	i = 0;
	while (str[i] && i < num)
	{
		if (str[i] == src[0])
		{
			y = 0;
			while (src[y] && str[i + y] == src[y] && (i + y) < num)
			{
				y++;
			}
			if (src[y] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (NULL);
}

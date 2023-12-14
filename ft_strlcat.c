/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:50:46 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/20 13:50:46 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t num)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < num && dest[i])
		i++;
	while ((i + j + 1) < num && src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < num)
	{
		dest[i + j] = '\0';
	}
	return (i + ft_strlen(src));
}

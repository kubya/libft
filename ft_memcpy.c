/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:49:37 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/18 13:49:37 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *p, const void *s, size_t num)
{
	size_t		i;
	char		*dest;
	char		*src;

	if (p == NULL || s == NULL)
		return (NULL);
	i = 0;
	dest = (char *)p;
	src = (char *)s;
	while (i < num)
	{
		dest[i] = src[i];
		i++;
	}
	return (p);
}

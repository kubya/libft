/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:49:18 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/18 13:49:18 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t		i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	if (src < dest)
	{
		while (num--)
		{
			((unsigned char *)dest)[num] = ((unsigned char *)src)[num];
		}
	}
	else
	{
		while (i < num)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

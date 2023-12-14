/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:31:55 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/22 16:31:55 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	n;
	void	*p;

	if (num == 0 || size == 0)
	{
		num = 1;
		size = 1;
	}
	n = num * size;
	p = malloc(n);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, n);
	return (p);
}

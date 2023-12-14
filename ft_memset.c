/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 07:09:28 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/18 07:09:28 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int c, size_t num)
{
	char	*v;

	v = (char *)p;
	while (num > 0)
	{
		v[num - 1] = c;
		num--;
	}
	return (p);
}

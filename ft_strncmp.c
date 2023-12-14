/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:44:45 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/21 19:44:45 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	while (*str1 && *str1 == *str2 && num > 0)
	{
		str1++;
		str2++;
		num--;
	}
	if (num == 0)
		return (0);
	return (*(unsigned char *)str1 - *(unsigned char *)str2);
}

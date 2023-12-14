/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 00:06:48 by ndesques          #+#    #+#             */
/*   Updated: 2023/11/11 00:06:48 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_numlen(int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i += 1;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	unsigned int	num;
	char			*dest;

	len = ft_numlen(n);
	dest = (char *)malloc((len + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	dest[len] = '\0';
	if (n == 0)
		dest[0] = '0';
	if (n < 0)
	{
		num = -n;
		dest[0] = '-';
	}
	else
		num = n;
	while (num != 0)
	{
		dest[len - 1] = num % 10 + '0';
		num = num / 10;
		len--;
	}
	return (dest);
}

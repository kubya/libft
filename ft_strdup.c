/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndesques <nefdesq@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 16:31:40 by ndesques          #+#    #+#             */
/*   Updated: 2023/10/22 16:31:40 by ndesques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	char	*p;

	dest = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (dest == NULL)
		return (NULL);
	p = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (p);
}

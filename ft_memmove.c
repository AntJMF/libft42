/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 12:59:01 by amoreno-          #+#    #+#             */
/*   Updated: 2021/07/31 16:52:14 by amoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*dest;
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = -1;
	source = (char *)src;
	dest = (char *)dst;
	if (source < dest)
		while ((int)(--len) >= 0)
			*(dest + len) = *(source + len);
	else
		while (++i < len)
			*(dest + i) = *(source + i);
	return (dst);
}

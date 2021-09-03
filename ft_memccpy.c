/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 10:59:01 by amoreno-          #+#    #+#             */
/*   Updated: 2021/07/31 16:52:14 by amoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*source;

	dst = (unsigned char *) dest;
	source = (unsigned char *) src;
	while (n-- > 0 && *source != (unsigned char)c)
	{
		*dst++ = *source++;
	}
	if (*source == (unsigned char)c)
	{
		*dst++ = *source++;
		return ((void *) dst);
	}
	else
		return (NULL);
}

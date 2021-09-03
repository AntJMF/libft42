/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:34:58 by amoreno-          #+#    #+#             */
/*   Updated: 2021/04/13 17:03:39 by amoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	cont;

	cont = 0;
	if (size > 0)
	{
		while (src[cont] && cont < (size - 1))
		{
			dst[cont] = src[cont];
			cont++;
		}
		dst[cont] = '\0';
	}
	while (src[cont])
		cont++;
	return (cont);
}

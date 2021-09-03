/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 10:59:01 by amoreno-          #+#    #+#             */
/*   Updated: 2021/08/29 18:39:33 by amoreno-         ###   ########.fr	      */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	count;
	char			*dst;	

	if (!s)
		return (NULL);
	dst = (char *)malloc(ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	count = 0;
	while (*s)
	{
		dst[count] = f(count, *s++);
		count++;
	}
	dst[count] = 0;
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 10:59:01 by amoreno-          #+#    #+#             */
/*   Updated: 2021/08/29 14:39:58 by amoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	int		len;
	int		i;

	len = -1;
	i = 0;
	str = (char *)s;
	c = c % 256;
	while (*str != '\0')
	{
		if (*str == c)
			len = i;
		str++;
		i++;
	}
	if (c == 0)
		return (str);
	else if (len == (-1))
		return (0);
	else
		return ((char *)s + len);
}

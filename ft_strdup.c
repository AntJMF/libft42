/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 10:59:01 by amoreno-          #+#    #+#             */
/*   Updated: 2021/08/29 17:46:04 by amoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		cont;

	cont = 0;
	str = (char *)malloc(ft_strlen((char *)s) * (int) sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (s[cont] != 0)
	{
		str[cont] = s[cont];
		cont++;
	}
	str[cont] = 0;
	return (str);
}

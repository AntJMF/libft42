/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 11:44:49 by amoreno-          #+#    #+#             */
/*   Updated: 2021/08/29 14:36:16 by amoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			limite;
	int				cont;
	unsigned char	*str1;
	unsigned char	*str2;

	cont = 0;
	limite = 1;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((str1[cont] == str2[cont] && limite < n)
		&& (str1[cont] != '\0' && str2[cont] != '\0'))
	{
		limite++;
		cont++;
	}
	return (str1[cont] - str2[cont]);
}

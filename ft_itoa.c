/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 10:59:01 by amoreno-          #+#    #+#             */
/*   Updated: 2021/08/29 15:08:26 by amoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int num)
{
	int	cont;

	cont = 0;
	if (num == 0)
	{
		cont = 1;
	}
	if (num < 0)
	{
		cont++;
		num = -1 * num;
	}
	while (num != 0)
	{
		num = num / 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	int		nlen;
	char	*s;
	long	num;

	num = (long)n;
	nlen = ft_intlen(n);
	s = malloc(nlen + 1);
	if (!s)
		return (NULL);
	s[nlen] = '\0';
	if (num == 0)
		s[0] = '0';
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	nlen--;
	while (nlen >= 0 && num != 0)
	{
		s[nlen] = num % 10 + '0';
		num = num / 10;
		nlen--;
	}
	return (s);
}

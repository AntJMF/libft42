/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 10:59:01 by amoreno-          #+#    #+#             */
/*   Updated: 2021/07/31 16:52:14 by amoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	char		*ptr;

	ptr = (char *)big;
	i = 0;
	if (little[0] == '\0')
		return (ptr);
	while (ptr[i] && len-- > 0)
	{
		j = 0;
		while ((ptr[i + j] && ptr[i + j] == little[j]) && j <= len)
		{
			if (little[j + 1] == '\0')
			{
				return (&ptr[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

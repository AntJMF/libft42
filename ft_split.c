/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoreno- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/29 16:49:33 by amoreno-          #+#    #+#             */
/*   Updated: 2021/08/29 16:55:00 by amoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (!s[i])
			return (count);
		count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

size_t	stops(const char *s, char c, size_t i)
{
	while (s[i] == c && s[i])
		i++;
	return (i);
}	

char	**ft_split(char const *s, char c)
{
	char	**array;
	size_t	i;
	size_t	j;
	size_t	stopper;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * ft_len(s, c) + sizeof(char *));
	if (!s || !array)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		i = stops(s, c, i);
		stopper = i;
		if (!s[i])
			break ;
		while (s[i] != c && s[i])
			i++;
		array[j] = ft_substr(s, stopper, i - stopper);
		j++;
	}
	array[j] = NULL;
	return (array);
}

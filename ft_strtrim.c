/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:11:51 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/08 03:39:29 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_match(char const c, char const *set, size_t i, size_t size_s1)
{
	size_t	j;

	j = 0;
	while (j < ft_strlen(set) && i < size_s1)
	{
		if (c == set[j] && set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	k;
	char	*tab;

	i = 0;
	k = 0;
	tab = malloc (sizeof (char) * (ft_strlen(s1)));
	if (!tab)
		return (NULL);
	while (ft_match(s1[i], set, i, ft_strlen(s1)))
		i++;
	while (s1[i])
		tab[k++] = s1[i++];
	i--;
	k--;
	while (ft_match(s1[i], set, i, ft_strlen(s1)))
	{
		i--;
		k--;
	}
	tab[k + 1] = 0;
	return (tab);
}

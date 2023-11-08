/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:09:53 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/08 02:29:17 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	i = start;
	tab = malloc (sizeof (char) * len);
	if (!tab)
		return (NULL);
	while (s[i] && i < len + start)
	{
		tab[i - start] = s[i];
		i++;
	}
	tab[i - start] = 0;
	return (tab);
}

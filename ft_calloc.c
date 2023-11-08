/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 22:28:05 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/08 01:50:33 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*tab;
	int		i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	tab = malloc (nmemb * size);
	if (!tab)
		return (NULL);
	while (tab[i])
		tab[i++] = 0;
	return ((void *) tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:56:03 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/08 00:32:07 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (i < len && (j < ft_strlen(little)) && big[i] && little[j])
	{
		if (big[i] == little[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (j == ft_strlen(little))
		return ((char *) &big[i - j]);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:29:03 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/07 23:53:26 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*s2;
	char	*d2;

	s2 = (char *) src;
	d2 = (char *) dest;
	i = 0;
	if (&dest[0] < &src[0])
	{
		while (i < (int) n)
		{
			d2[i] = s2[i];
			i++;
		}
	}
	else
	{
		i = (int) n;
		while (i > 0)
		{
			i--;
			d2[i] = s2[i];
		}
	}
	return (dest);
}

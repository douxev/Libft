/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:51:35 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/07 22:52:07 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnchr(char *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s[i] && i < n)
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

void	*ft_memchr(const void *s, int c, size_t n)
{
	return (ft_strnchr((char *)s, c, n));
}

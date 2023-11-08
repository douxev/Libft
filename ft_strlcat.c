/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:34:46 by idoukhan          #+#    #+#             */
/*   Updated: 2023/11/08 00:56:46 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	sized;
	size_t	sizes;

	sized = ft_strlen(dst);
	sizes = ft_strlen(src);
	j = 0;
	if (!size)
		return (sizes);
	while (src[j] && j + sized < size - 1)
	{
		dst[sized + j] = src[j];
		j++;
	}
	dst[sized + j] = '\0';
	if (sized > size)
		return (size + sizes);
	return (sized + sizes);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:13:05 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/08 07:27:50 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*d;

	d = malloc (ft_strlen(s) * sizeof (char));
	if (!d)
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = f(i, s[i]);
		i++;
	}
	d[i] = 0;
	return (d);
}

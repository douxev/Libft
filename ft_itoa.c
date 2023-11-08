/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 01:56:57 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/08 07:15:39 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_more(int n, char *tab, int *i)
{
	if (n < 10)
		tab[(*i)++] = (char) n + 48;
	else
	{
		ft_more(n / 10, tab, i);
		ft_more(n % 10, tab, i);
	}
}

char	*ft_itoa(int n)
{
	char	*tab;
	int		i;

	i = 0;
	tab = malloc (sizeof (char) * 12);
	if (!tab)
		return (NULL);
	ft_memset(tab, 0, 12);
	if (n == -2147483648)
	{
		ft_strlcpy(tab, "-2147483648", 12);
		return (tab);
	}
	if (n < 0)
	{
		tab[i++] = '-';
		n *= -1;
	}
	ft_more(n, tab, &i);
	return (tab);
}

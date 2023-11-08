/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdoukhan <jdoukhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:12:04 by jdoukhan          #+#    #+#             */
/*   Updated: 2023/11/08 06:45:04 by jdoukhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
}

int	ft_next_split(char const *str, char c, int i, char cnt)
{
	(void) cnt;
	while (str[i] && str[i] != c && str[i + 1])
		i++;
	return (i);
}

void	ft_whiloop(char const *s, char **tab, int *cnt, char c)
{
	tab[cnt[4]] = NULL;
	cnt[0] = 0;
	while (s[cnt[2]])
	{
		while (s[cnt[2]] == c)
				cnt[2]++;
		cnt[3] = ft_next_split(s, c, cnt[2], cnt[4]);
		tab[cnt[0]] = malloc (sizeof (char) * (cnt[3] - cnt[2] + 2));
		if (!tab[cnt[0]])
			return (ft_free(tab));
		cnt[1] = 0;
		while (cnt[2] <= cnt[3] && s[cnt[2]] != c && s[cnt[2]] != 0)
		{
			tab[cnt[0]][cnt[1]++] = s[cnt[2]];
			cnt[2]++;
		}
		while (s[cnt[2]] == c)
			cnt[2]++;
		tab[cnt[0]][cnt[1]] = 0;
		cnt[0]++;
	}
		tab[cnt[0]] = NULL;
}

char	**ft_more(void)
{
	char	**tab;

	tab = malloc (sizeof (char *) * 2);
	if (!tab)
		return (NULL);
	tab[0] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		cnt[5];

	cnt[0] = 0;
	cnt[1] = 0;
	cnt[2] = 0;
	cnt[4] = 0;
	if (!s[0])
		return (NULL);
	while (s[cnt[0]] == c && s[cnt[0]])
		cnt[0]++;
	if (s[cnt[0]] == 0)
	{
		tab = ft_more();
		if (!tab)
			return (NULL);
		return (tab);
	}
	while (s[cnt[0]])
		cnt[0] = ft_next_split(s, c, cnt[0], cnt[4]++) + 1;
	tab = malloc ((cnt[4] + 2) * sizeof (char *));
	if (!tab)
		return (NULL);
	ft_whiloop(s, tab, cnt, c);
	return (tab);
}

/* #include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	char	**tab = ft_split(argv[1], argv[2][0]);
	(void) argc;
	i = 0;
	if (!tab)
		return (0);
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		if (tab[i])
			free(tab[i]);
		i++;
	}
	if (tab)
		free(tab);
}
 */
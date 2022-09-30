/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 14:50:38 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countwords(char const *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (s[i] == '\0')
		return (0);
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c)
			j++;
		i++;
	}
	if (i > 0 && s[i - 1] == c)
		j--;
	return (j);
}

static char	**ft_malloc_error(char **tab)
{
	unsigned int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**ft_fill(char **tab, const char *s, char c, const int w)
{
	int		i;
	int		j;
	int		k;
	int		l;

	k = 0;
	j = 0;
	while (k < w)
	{
		while (s[j] == c)
			j++;
		i = j;
		while (s[i] && s[i] != c)
			i++;
		tab[k] = malloc(sizeof(char) * (i - j + 1));
		if (!tab[k])
			return (ft_malloc_error(tab));
		l = 0;
		while (j < i)
			tab[k][l++] = s[j++];
		tab[k][l] = '\0';
		k++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		w;

	if (!s)
		return (NULL);
	w = ft_countwords(s, c);
	tab = malloc(sizeof(char *) * (w + 1));
	if (!tab)
		return (NULL);
	tab = ft_fill(tab, s, c, w);
	tab[w] = NULL;
	return (tab);
}

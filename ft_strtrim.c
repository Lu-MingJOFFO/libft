/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 17:53:36 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlens1(char const *s1)
{
	int	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

static int	ft_countfront(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s1[i] != set[j] && set[j])
		{
			j++;
			if (set[j] == '\0')
				return (i);
		}
		j = 0;
		i++;
	}
	return (0);
}

static int	ft_countback(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	i = i - 1;
	while (i >= 0)
	{
		while (s1[i] != set[j] && set[j])
		{
			j++;
			if (set[j] == '\0')
				return (i);
		}
		j = 0;
		i--;
	}
	return (-1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		k;
	int		l;
	int		m;
	char	*s2;
	int		i;

	if (!s1)
		return (NULL);
	k = ft_countfront(s1, set);
	l = ft_countback(s1, set);
	m = l - k;
	if (set[0])
		s2 = malloc((m + 2) * sizeof(char));
	else
		s2 = malloc((ft_strlens1(s1) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while ((i <= m) || ((!set[0]) && (s1[i])))
		s2[i++] = s1[k++];
	s2[i] = '\0';
	return (s2);
}
/*
int	main(void)
{
	char const	*string;
	char const	*trim;

	string = "123";
	trim = "";
	printf("%s", ft_strtrim(string, trim));
}
*/

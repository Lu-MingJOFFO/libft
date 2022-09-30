/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 12:32:32 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 18:15:50 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 1;
	k = 0;
	while (nptr[i] == 32 || (8 < nptr[i] && nptr[i] < 14))
		i++;
	if ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
			j = -1;
		i++;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		k = k * 10 + (nptr[i] - 48);
		i++;
	}
	return (k * j);
}

/*
int	main(void)
{
	char	*string;

	string = "99999999999999999999999999";
	printf("%d\n", ft_atoi(string));
	printf("%d\n", atoi(string));
}*/

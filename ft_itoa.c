/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 17:54:40 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(int n)
{
	int				i;
	unsigned int	nb;

	i = 1;
	nb = n;
	if (n < 0)
		nb = -n;
	while (nb > 9)
	{
		nb = nb / 10;
		i++;
	}
	if (n < 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	nb;

	nb = n;
	if (n < 0)
		nb = -n;
	i = ft_countdigits(n);
	str = malloc((i + 1) * sizeof(char));
	if (! str)
		return (0);
	str[i] = '\0';
	while (nb > 9)
	{
		str[i - 1] = nb % 10 + 48;
		nb = nb / 10;
		i--;
	}
	str[i - 1] = nb + 48;
	if (n < 0)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648LL));
}
*/

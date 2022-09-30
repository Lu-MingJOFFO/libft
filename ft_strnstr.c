/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 17:18:50 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	size_t	i;
	size_t	j;

	b = (char *)big;
	i = 0;
	j = 0;
	if (little[i] == 0)
		return (b);
	while (b[i] && i < len)
	{
		while (b[i + j] == little[j] && little[j] && i + j < len)
			j++;
		if (little[j] == '\0')
			return (b + i);
		j = 0;
		i++;
	}
	return (0);
}

/*int	main(void)
{
	const char	*b;
	const char	*l;
	b = "HelloloumHiloum";
	l = "loum";


	printf("big: %s\n", b);
        printf("little: %s\n", l);

        printf("%p\n", ft_strnstr(b, l, 9));
        printf("%p\n", strnstr(b, l, 9));

        printf("%s\n", ft_strnstr(b, l, 9));
	printf("%s\n", strnstr(b, l, 9));
}*/

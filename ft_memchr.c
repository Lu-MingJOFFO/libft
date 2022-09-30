/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 17:27:43 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	cha;

	cha = (char) c;
	str = (char *) s;
	i = 0;
	while (i < n)
	{
		if (str[i] == cha)
			return (str + i);
		i++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*string;

	string = "Hello World";

	printf("%s\n", string);
	printf("%p\n", ft_memchr(string, 87, 20));
      	printf("%p\n", memchr(string, 87, 20));
        printf("%s\n", (char *) ft_memchr(string, 87, 20));
        printf("%s\n", (char *) memchr(string, 87, 20));
}
*/

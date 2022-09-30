/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:20:23 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while ((i < size - 1) && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int	main(void)
{
	char	*source;
	char	destination[40];

	source = "Hello World";
	printf("%s\n", source);
	ft_strlcpy(destination, source, 8);
	printf("%s\n", destination);
	printf("%ld\n", ft_strlcpy(destination, source, 8));

        char    *source2;
        char    destination2[40];

        source2 = "Hello World";
        printf("%s\n", source2);
        strlcpy(destination2, source2, 8);
        printf("%s\n", destination2);
        printf("%ld\n", strlcpy(destination2, source2, 8));
}*/

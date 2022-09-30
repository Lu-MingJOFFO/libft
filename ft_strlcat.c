/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:41:09 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	k = i;
	if (size > k)
	{
		while ((i < size - 1) && src[j])
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	while (src[j])
		j++;
	return (j + k);
}

/*int   main(void)
{
	char    *source;
	char    destination[20] = "Helloo";

	source = "World";
	printf("%s\n", source);
	printf("%s\n", destination);
	printf("%ld\n", ft_strlcat(destination, source, 9));
        printf("%s\n", destination);

	printf("\n");

	char    *source2;
        char    destination2[20] = "Helloo";

        source2 = "World";
        printf("%s\n", source2);
        printf("%s\n", destination2);
        printf("%ld\n", strlcat(destination2, source2, 9));
        printf("%s\n", destination2);
}*/

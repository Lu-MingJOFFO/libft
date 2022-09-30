/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 16:24:18 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*s;

	if (!dest && !src)
		return (0);
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	*source;
	char	destination[40] = "aaaaaaaaaaaaaaaaaaaaaaaaaa";
	source = "Hello world";

	printf("%s\n", source);
	printf("%s\n", destination);
	ft_memcpy(destination, source, 7);
	printf("%s\n", source);
	printf("%s\n", destination);
//	printf("%s\n", (char *) ft_memcpy(destination, source, 7));

        char    *source2;
        char    destination2[40] = "aaaaaaaaaaaaaaaaaaaaaaaa";
        source2 = "Hello world";

        printf("%s\n", source2);
	printf("%s\n", destination2);
        memcpy(destination2, source2, 7);
        printf("%s\n", source2);
        printf("%s\n", destination2);


	int	tab1[] = {1, 2, 3, 4, 5};
	int	dest1[] = {6, 7, 8, 9, 10, 11, 12};
	int	i;
	i = 0;
        while (i < 5)
        {
                printf("%d ", tab1[i]);
                i++;
        }
        printf("\n");
	ft_memcpy(dest1, tab1, 6);
        i = 0;
        while (i < 7)
        {
                printf("%d ", dest1[i]);
                i++;
        }
	printf("\n");

	int     tab2[] = {1, 2, 3, 4, 5};
	int     dest2[] = {6, 7, 8, 9, 10, 11, 12};
        i = 0;
	while (i < 5)
	{
		printf("%d ", tab2[i]);
		i++;
	}
	printf("\n");
	memcpy(dest2, tab2, 6);
	i = 0;
        while (i < 7)
        {
                printf("%d ", dest2[i]);
                i++;
        }
}*/

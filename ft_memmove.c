/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 16:25:11 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	if (src < dest)
	{
		while (n > 0)
		{
			d[n -1] = s[n - 1];
			n--;
		}
	}
	return (dest);
}

/*int	main(void)
{
	char	source1[50] = "123456789";

	printf("%s\n", source1);
//	ft_memmove(source1+2, source1, 5);
//	printf("%s\n", source1+2);
	printf("%s\n", (char *) ft_memmove(source1+2, source1, 5));

	char    source2[50] = "123456789";

        printf("%s\n", source2);
        printf("%s\n", (char *) memmove(source2+2, source2, 5));


	int	tab1[] = {1, 2, 3, 4, 5};
	int	i;
	i = 0;
        while (i < 5)
        {
                printf("%d ", tab1[i]);
                i++;
        }
        printf("\n");
	ft_memmove(tab1+2, tab1, 3);
        i = 0;
        while (i < 5)
        {
                printf("%d ", tab1[i+2]);
                i++;
        }
	printf("\n");

	int     tab2[] = {1, 2, 3, 4, 5};
        i = 0;
	while (i < 5)
	{
		printf("%d ", tab2[i]);
		i++;
	}
	printf("\n");
	memmove(tab2+2, tab2, 3);
	i = 0;
        while (i < 5)
        {
                printf("%d ", tab2[i+2]);
                i++;
        }
}*/

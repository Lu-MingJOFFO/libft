/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 12:18:44 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return (s);
}

/*int   main(void)
{
      	char    string1[] = "Hello";
        printf("%s\n", string1);
        //ft_memset(string1, 53, 3);
       	//printf("%s\n", string1);
	printf("%s\n", (char *) ft_memset(string1, 53, 3));

	char    string2[] = "Hello";
	printf("%s\n", string2);
	memset(string2, 53, 3);
	printf("%s\n", string2);



	int	tab1[] = {1, 2, 3, 4, 5};
	int	i;
	i = 0;
        while (i < 5)
        {
                printf("%d ", tab1[i]);
                i++;
        }
        printf("\n");
	ft_memset(tab1, 1, 2);
        i = 0;
        while (i < 5)
        {
                printf("%d ", tab1[i]);
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
	memset(tab2, 1, 2);
	i = 0;
        while (i < 5)
        {
                printf("%d ", tab2[i]);
                i++;
        }
}*/

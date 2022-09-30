/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 13:35:04 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	char	string1[] = "Hello";
	printf("%s\n", string1);
	ft_bzero(string1+2, 2);
	printf("%s\n", string1);

	char    string2[] = "Hello";
	printf("%s\n", string2);
        bzero(string2+2, 2);
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
	ft_bzero(tab1, 2);
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
	bzero(tab2, 2);
	i = 0;
        while (i < 5)
        {
                printf("%d ", tab2[i]);
                i++;
        }
}*/

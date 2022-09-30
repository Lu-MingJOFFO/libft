/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 14:39:09 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i != nmemb * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

/*
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*string1;
	char    *string2;

	string1 = ft_calloc (9, 1);
	string2 = calloc (9, 1);
	printf("%s\n", string1);
        printf("%s\n", string2);
}
*/

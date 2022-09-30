/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 13:44:15 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')
		|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}

/*int	main(void)
{
	int c;

	c = ' ';
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", isalnum(c));

        c = 'b';
        printf("%d\n", ft_isalnum(c));
        printf("%d\n", isalnum(c));
}*/

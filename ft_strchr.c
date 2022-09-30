/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:04:49 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (str + i);
		i++;
	}
	if (str[i] == (char)c)
		return (str + i);
	return (0);
}
/*
int	main(void)
{
	char	*string;

	string = "tripouille";

	printf("%s\n", string);
	printf("%p\n", ft_strchr(string, 't' + 256));
	printf("%p\n", strchr(string, 't' + 256));
        printf("%s\n", ft_strchr(string, 't' + 256));
      	printf("%s\n", strchr(string, 't' + 256));
}
*/

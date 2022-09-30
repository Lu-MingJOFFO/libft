/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljoffo <ljoffo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 11:28:06 by ljoffo            #+#    #+#             */
/*   Updated: 2021/12/17 17:52:12 by ljoffo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *) s;
	i = 0;
	while (str[i])
		i++;
	if (str[i] == (char)c)
		return (str + i);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		i--;
	}
	return (0);
}

/*int	main(void)
{
	char	*string;

	string = "Hello World";

	printf("%s\n", string);
	printf("%p\n", ft_strrchr(string, 32));
      	printf("%p\n", strrchr(string, 32));
        printf("%s\n", ft_strrchr(string, 32));
        printf("%s\n", strrchr(string,32));
}*/

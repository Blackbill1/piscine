/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 03:28:15 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/06 03:35:22 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) >= 'a' && *(str + i) <= 'z'))
		{
			return (0);
		}
		i ++ ;
	}
	return (1);
}

/*int	main(void)
{
	char c[] = "aaaaaaa";
	printf("%d", ft_str_is_lowercase(c));
}*/

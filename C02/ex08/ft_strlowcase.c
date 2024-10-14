/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:16:24 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/06 23:16:26 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i ;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'A' && *(str + i) <= 'Z')
		{
			*(str + i) = *(str + i) + ('a' - 'A');
		}
		i ++ ;
	}
	return (str);
}

/*int	main(void)
{
	int i = 0;
	char c[] = "BON1OUR";
	ft_strlowcase(c);
	while (c[i] != '\0')
	{
		printf("%c", c[i]);
		i++;
	}
}*/

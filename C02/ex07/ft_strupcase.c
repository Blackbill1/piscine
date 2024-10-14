/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 21:47:18 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/06 21:47:27 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			*(str + i) = *(str + i) - ('a' - 'A');
		}
		i ++ ;
	}
	return (str);
}

/*int	main(void)
{
	int i = 0;
	char c[] = "bonj1our";
	ft_strupcase(c);
	while (c[i] != '\0')
	{
		printf("%c", c[i]);
		i++;
	}
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 08:46:12 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/05 09:12:29 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i ++ ;
	}
	*(dest + i) = '\0';
	return (dest);
}

/*int	main(void)
{
	char	c1[] = "lala lolo";
	char	c2[] = "caca";
	int i = 0;
	//while (c1[i] != '\0' )
	//{
	//	printf("%c",c1[i]);
	//	i++;
	//}
	i = 0;
	ft_strcpy(c2, c1);

	while (c2[i] != '\0' )
	{
		printf("%c", c2[i]);
		i++;
	}
}*/

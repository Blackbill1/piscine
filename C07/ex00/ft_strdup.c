/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 22:51:40 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/12 12:17:36 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str != '\0')
	{
		cpt++;
		str++;
	}
	return (cpt);
}

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc(ft_strlen(src) + 1);
	if (!result)
		return (NULL);
	while (src[i] != '\0')
	{
		result[i] = src[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*int	main(void)
{
	char *test = "test";
	printf("%p \n", test);
	char *test2 = ft_strdup(test);
	printf("%p", test2);
}*/
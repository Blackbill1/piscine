/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:57:01 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/04 13:21:06 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cpt;

	cpt = 0;
	while (*str != '\0')
	{
		cpt ++ ;
		str ++ ;
	}
	return (cpt);
}

/*int	main(void)
{
	char	c[10] = "bob";
	int ct = ft_strlen(c);
	printf("%d",ct);
}*/

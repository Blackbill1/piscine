/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 02:55:19 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/12 12:02:41 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	skip(char *str, int *n)
{
	int	i;

	i = 0;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			*n = *n * -1;
		}
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	result;

	n = 1;
	result = 0;
	i = skip(str, &n);
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result = result + (str[i] - '0');
		i++;
	}
	return (result * n);
}

/*int	main(void)
{
	printf("%d\n", ft_atoi("     -----+--+-1543"));
}*/
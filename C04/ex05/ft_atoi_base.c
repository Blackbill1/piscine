/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 06:38:55 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/13 20:35:24 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!base || !base[1])
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	check(char c, char *base, int *p)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
		{
			*p = i;
			return (1);
		}
		i++;
	}
	return (0);
}

void	loop(char *str, int *n, int *result, char *base)
{
	int	c;
	int	len_base;
	int	i;

	c = 0;
	len_base = 0;
	i = 0;
	while (base[len_base])
		len_base++;
	while ((str[i] >= 8 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			*n *= -1;
		i++;
	}
	while (check(str[i], base, &c))
	{
		*result = *result * len_base;
		*result = *result + c;
		i++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	n;

	result = 0;
	n = 1;
	if (check_base(base) == 0)
		return (0);
	loop(str, &n, &result, base);
	return (result * n);
}

int	main(void)
{
	char str[] = "   --++----ofe";
	char base[] = "poneyvif";
	int result;

	result = ft_atoi_base(str, base);
	printf("result = %d\n", result);
	return (0);
}
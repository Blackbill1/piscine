/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:01:24 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/11 13:40:53 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while ((ft_recursive_power(i, 2) != nb) && (ft_recursive_power(i, 2) <= nb))
	{
		i++;
		if (ft_recursive_power(i, 2) == nb)
		{
			return (i);
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_sqrt(9));
}*/
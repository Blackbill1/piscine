/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 21:46:10 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/11 20:53:43 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	verif;

	i = 1;
	verif = 0;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0)
			verif++;
		i++;
	}
	if (verif == 2)
		return (1);
	else
	{
		return (0);
	}
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) != 1)
	{
		nb++;
	}
	return (nb);
}

/*int	main(void)
{
	printf("%d", ft_find_next_prime(1245656));
}*/

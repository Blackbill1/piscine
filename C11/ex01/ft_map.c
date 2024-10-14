/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 20:08:20 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/23 22:36:23 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_putnbr(int nb)
{
	return (nb);
}

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*res;
	int	i;

	i = 0;
	res = malloc(length * sizeof(int));
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}

/*int	main(void)
{
	int *res;
	int i = 0;
	int tab[5] = {1, 2, 3, 4, 5};
	res = ft_map(tab, 5, &ft_putnbr);
	while (i < 5)
	{
		printf("%d", res[i]);
		i++;
	}
}*/
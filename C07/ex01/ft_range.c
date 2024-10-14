/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 10:54:30 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/12 11:49:06 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (tab == 0)
		return (NULL);
	else
	{
		while (i < (max - min))
		{
			tab[i] = i + min;
			i++;
		}
		return (tab);
	}
}

/*int	main(void)
{
	int i = 3;
	int *t;
	t = ft_range(3, 10);
	while (i < 10)
	{
		i++;
	}
}*/
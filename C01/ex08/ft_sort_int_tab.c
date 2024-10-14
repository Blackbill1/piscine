/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:59:56 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/04 17:38:03 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (*(tab + j) < *(tab + i))
			{
				swap(tab + j, tab + i);
			}
			j ++ ;
		}
		i ++ ;
	}
}

/*int	main(void)
{
	int t[4] = {4, 1, 3, 2};
	ft_sort_int_tab(t, 4);
	int i = 0;
	while (i < 4)
	{
		printf("%d",t[i]);
		i++;
	}
}*/

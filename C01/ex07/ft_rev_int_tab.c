/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 13:23:49 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/04 15:40:57 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	s;

	s = size - 1;
	n = 0;
	while (n < size / 2)
	{
		swap(tab + n, tab + s);
		n ++ ;
		s -- ;
	}
}

/*int	main(void)
{
	int t[] = {'1', '2', '3', '4'};
	write(1, t, sizeof(t));
	ft_rev_int_tab(t, 4);
	write(1, t, sizeof(t));
}*/

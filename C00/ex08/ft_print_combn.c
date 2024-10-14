/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 17:26:42 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/03 21:51:08 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_combn_r(char t[], char c, int i, int n)
{
	int	k;

	while (c - 48 <= 10 - n)
	{
		t[i] = c;
		k = 0;
		if (n - 1 != 0)
		{
			ft_combn_r(t, c + 1, i + 1, n - 1);
		}
		else
		{
			if (c - 48 != i)
			{
				write(1, ", ", 2);
			}
			while (t[k] != '\0')
			{
				write(1, &t[k], 1);
				k ++ ;
			}
		}
		c ++ ;
	}
}

void	ft_print_combn(int n)
{
	char	tab[10];
	int		i;

	tab[n] = '\0';
	i = 0;
	while (i < n)
	{
		tab[i] = '0';
		i ++ ;
	}
	ft_combn_r(tab, '0', 0, n);
}

/*int	main(void)
{
	ft_print_combn(1);
}*/

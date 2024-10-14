/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 10:33:01 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/03 11:37:57 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ptc(char c)
{
	write(1, &c, 1);
}

void	ft_print(char a, char b, char c, char d)
{
	ft_ptc(a);
	ft_ptc(b);
	ft_ptc(' ');
	ft_ptc(c);
	ft_ptc(d);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			ft_print(a / 10 + '0', a % 10 + '0', b / 10 + '0', b % 10 + '0');
			if (a != 98)
			{
				ft_ptc(',');
				ft_ptc(' ');
			}
			b ++ ;
		}
		a ++ ;
		b = a + 1;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 09:35:55 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/03 10:30:50 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ptc(char c)
{
	write(1, &c, 1);
}

void	ftc_print(char a, char b, char c)
{
	ft_ptc(a);
	ft_ptc(b);
	ft_ptc(c);
	if (a != '7')
	{
		ft_ptc(',');
		ft_ptc(' ');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ftc_print(a, b, c);
				c ++ ;
			}
			b ++ ;
			c = b + 1 ;
		}
		b = a + 1 ;
		a ++ ;
	}
}

/*int	main(void)
{
	ft_print_comb();
}*/

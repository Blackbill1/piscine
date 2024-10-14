/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 19:50:42 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/17 21:25:40 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*void	ft_ptc(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{

	if (nb == -2147483648)
	{
		nb = 147483648;
		ft_ptc('-');
		ft_ptc('2');
	}
	if (nb < 0)
	{
		ft_ptc('-');
		nb = nb * -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_ptc((nb % 10) + '0');
}*/

/*int	main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	ft_foreach(tab, 5, &ft_putnbr);
}*/
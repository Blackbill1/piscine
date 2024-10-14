/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:30:47 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/23 21:00:54 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/myHeader.h"
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	n;
	int	i;
	int	result;

	n = 1;
	result = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n = -n;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10;
		result = result + (str[i] - '0');
		i++;
	}
	return (result * n);
}

void	do_op(char op, int a, int b)
{
	int	(*tab[5])(int, int);

	tab[0] = &ft_add;
	tab[1] = &ft_sub;
	tab[2] = &ft_mul;
	tab[3] = &ft_div;
	tab[4] = &ft_mod;
	if (op == '+')
		ft_putnbr(tab[0](a, b));
	else if (op == '-')
		ft_putnbr(tab[1](a, b));
	else if (op == '*')
		ft_putnbr(tab[2](a, b));
	else if (op == '/' && b != 0)
		ft_putnbr(tab[3](a, b));
	else if (op == '%' && b != 0)
		ft_putnbr(tab[4](a, b));
	else if (op == '%')
		ft_putstr("Stop : modulo by zero");
	else if (op == '/')
		ft_putstr("Stop : division by zero");
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (ft_strlen(argv[2]) != 1)
	{
		ft_putstr("0\n");
		return (0);
	}
	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%'))
		ft_putchar('0');
	do_op(argv[2][0], ft_atoi(argv[1]), ft_atoi(argv[3]));
}

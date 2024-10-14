/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 05:10:01 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/10 18:53:10 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check(char *base)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (ft_strlen(base) <= 1)
		return (0);
	while (i < ft_strlen(base))
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	b;

	if (!check(base))
		return ;
	b = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr_base(-(nbr / b), base);
		ft_putchar(base[-(nbr % b)]);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr >= b)
	{
		ft_putnbr_base(nbr / b, base);
	}
	ft_putchar(base[nbr % b]);
}

/*int    main(void)
{
	char    base[] = "poneyvif";

	ft_putnbr_base(-2147483648, base);
}*/
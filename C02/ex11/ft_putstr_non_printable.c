/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 19:16:23 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/10 01:37:51 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i ++ ;
	}
	*(dest + i) = '\0';
}

void	hexa(unsigned char c)
{
	char	tab[17];
	int		div;
	int		mod;

	div = c / 16;
	mod = c % 16;
	ft_strcpy(tab, "0123456789abcdef");
	ft_putchar('\\');
	ft_putchar(tab[div]);
	ft_putchar(tab[mod]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			hexa(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i ++;
	}
}

/*int main()
{
    char str[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str);
}*/

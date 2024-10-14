/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 12:59:52 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/17 20:58:08 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		my_strlen(char *str);
int		check_base(char *base);
char	*skip(char *str, int *m);
char	*my_strchr(char *str, char c);
char	*transform(char *str, char *base_from);

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	return (nb);
}

char	*change_baseten_to_baseto(int nbr, char *base_to, int blen, int m)
{
	int		i;
	int		n;
	int		last;
	char	*res;

	n = nbr;
	i = 0;
	while (n != 0)
	{
		n /= blen;
		i++;
	}
	i += m;
	last = i;
	res = malloc((i + 1) * sizeof(char));
	if (m == 1 && nbr != 0)
		res[0] = '-';
	res[last + 1] = '\0';
	while (i > m)
	{
		res[--i] = base_to[nbr % blen];
		nbr /= blen;
	}
	return (res);
}

int	change_basefrom_to_baseten(int nbr, char *base_from, int nlen)
{
	int	i;
	int	lnbf;
	int	res;

	i = 0;
	lnbf = my_strlen(base_from);
	res = 0;
	while (i < nlen)
	{
		res += (nbr % 10) * (ft_recursive_power(lnbf, i));
		nbr /= 10;
		i++;
	}
	return (res);
}

int	convert_cnbr_to_inbr(char *nbr, char *base)
{
	int	ln;
	int	i;
	int	j;
	int	res;

	ln = my_strlen(nbr);
	j = 0;
	res = 0;
	ln--;
	while (ln >= 0)
	{
		i = 0;
		while (base[i])
		{
			if (nbr[ln] == base[i])
			{
				res += i * ft_recursive_power(10, j++);
				ln--;
				break ;
			}
			i++;
		}
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		m;

	if (!check_base(base_from) || !check_base(base_to))
		return (0);
	m = 0;
	nbr = skip(nbr, &m);
	nbr = transform(nbr, base_from);
	if (nbr == 0)
		return ("0");
	if (nbr[0] == base_from[0] && my_strlen(nbr) == 1)
	{
		res = malloc(2 * sizeof(char));
		res[0] = base_to[0];
		res[1] = '\0';
		return (res);
	}
	res = (change_baseten_to_baseto(change_basefrom_to_baseten
				(convert_cnbr_to_inbr(nbr,
						base_from), base_from, my_strlen(nbr)), base_to,
				my_strlen(base_to), m));
	return (res);
}
/*int	main(void)
{
	char	*a;
	char	*b;
	char	*c;

	a = "-154";
	b = "0123456789";
	c = "0123456";
	printf("%s", ft_convert_base(a, b, c));
	return (0);
}*/

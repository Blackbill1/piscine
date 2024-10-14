/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:06:47 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/23 22:36:08 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_inf(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) <= 0)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_sup(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) >= 0)
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_inf(tab, length, f) || ft_sup(tab, length, f))
		return (1);
	return (0);
}

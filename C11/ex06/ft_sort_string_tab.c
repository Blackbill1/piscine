/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:31:49 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/18 18:36:14 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	r;

	r = 0;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			return (-1);
		}
		i++;
	}
	return (0);
}

int	my_strslen(char **strs)
{
	int	len;

	len = -1;
	while (strs[++len])
		;
	return (len);
}

void	ptr_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_char_tab(char **tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) >= 0)
			{
				ptr_swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}

void	ft_sort_string_tab(char **tab)
{
	int	len;

	len = my_strslen(tab);
	ft_sort_char_tab(tab, len);
}
/*
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	ft_sort_string_tab(argv);
	while (i < argc)
	{
		printf("%s ", argv[i]);
		i++;
	}
	return (0);
}
*/
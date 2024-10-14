/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 18:33:21 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/23 10:24:27 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_char_tab(char **tab, int size, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	j = 0;
	while (j == 0)
	{
		j = 1;
		i = 0;
		while (i + 1 < size)
		{
			if (cmp(tab[i], tab[i + 1]) > 0)
			{
				j = 0;
				ptr_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
	}
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	len;

	len = my_strslen(tab);
	ft_sort_char_tab(tab, len, cmp);
}
/*
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	ft_advanced_sort_string_tab(argv, ft_strcmp);
	while (i < argc)
	{
		printf("%s ", argv[i]);
		i++;
	}
	return (0);
}
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

*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 11:58:49 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/16 04:26:10 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_multilen(int size, char **argv)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (size > 0)
	{
		l = l + ft_strlen(argv[i]);
		i++;
		size--;
	}
	return (l);
}

void	ft_finish(int size, char **strs, char *sep, char *join)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	k = 0;
	while (i < size)
	{
		l = -1;
		j = 0;
		while (strs[i][j] != '\0')
		{
			join[k] = strs[i][j];
			k++;
			j++;
		}
		while (sep[++l] != '\0' && i < size - 1)
		{
			join[k] = sep[l];
			k++;
		}
		i++;
	}
	join[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		s;
	int		len;
	char	*join;

	s = ft_strlen(sep) * (size - 1);
	len = ft_multilen(size, strs);
	if (size == 0)
	{
		join = malloc(sizeof(char) * 1);
		if (join == 0)
			return (NULL);
		join[0] = '\0';
		return (join);
	}
	join = malloc(sizeof(char) * (len + s) + 1);
	if (join == 0)
		return (NULL);
	ft_finish(size, strs, sep, join);
	return (join);
}

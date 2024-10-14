/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:05:35 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/16 19:42:24 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	my_strlen(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		;
	return (len);
}

char	*my_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

char	*my_cut(char *str, int start, int end)
{
	char	*res;
	int		len;
	int		i;
	int		j;

	len = end - start;
	res = malloc(len * sizeof(char));
	i = 0;
	j = start;
	while (i < len)
	{
		res[i] = str[j];
		i++;
		j++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	char	**strs;
	char	**addr;

	i = 0;
	k = 0;
	strs = malloc(sizeof(char *) * my_strlen(str));
	addr = strs;
	while (str[i])
	{
		if (my_strchr(charset, str[i]))
		{
			if (i != k)
				*strs++ = my_cut(str, k, i);
			k = i + 1;
		}
		i++;
	}
	if (i != k)
		*strs++ = my_cut(str, k, i);
	*strs = 0;
	return (addr);
}

int	my_strslen(char **strs)
{
	int	len;

	len = -1;
	while (strs[++len])
		;
	return (len);
}

/*int	main(int argc, char **argv)
{
	int		i;
	int		len;
	char	**strs;
	char	*charset;

	if (argc != 2)
	{
		return (0);
	}
	charset = ",";
	strs = ft_split(argv[1], charset);
	i = 0;
	len = my_strslen(strs);
	while (i < len)
	{
		printf("%s|", strs[i]);
		i++;
	}
	return (0);
}*/

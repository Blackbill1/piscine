/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 22:05:35 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/18 19:44:45 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (str);
		str++;
	}
	return (0);
}

char	*ft_cut(char *str, int start, int end)
{
	char	*res;
	int		len;
	int		i;

	len = end - start;
	i = 0;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = str[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	char	**addr;
	char	**strs;

	i = 0;
	k = 0;
	strs = malloc((ft_strlen(str) / 2 + 2) * sizeof(char *));
	addr = strs;
	if (!strs)
		return (NULL);
	while (str[i])
	{
		if (ft_strchr(charset, str[i]))
		{
			if (i != k)
				*strs++ = ft_cut(str, k, i);
			k = i + 1;
		}
		i++;
	}
	if (i != k)
		*strs++ = ft_cut(str, k, i);
	*strs = 0;
	return (addr);
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

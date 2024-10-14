/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:22:38 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/10 01:43:47 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	check(char c, char d)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		if (d >= 'A' && d <= 'Z')
			return (d + ('a' - 'A'));
		else
			return (d);
	}
	else if (!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
				&& c <= '9')))
	{
		if (d >= 'a' && d <= 'z')
			return (d - ('a' - 'A'));
	}
	return (d);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - ('a' - 'A');
		i++;
	}
	while (str[i] != '\0')
	{
		str[i] = check(str[i - 1], str[i]);
		i++;
	}
	return (str);
}

/*int	main(void)
{
	int i = 0;
	char c[] = "sa\alut,
		comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(c);
	while (c[i] != '\0')
	{
		printf("%c", c[i]);
		i++;
	}
}*/

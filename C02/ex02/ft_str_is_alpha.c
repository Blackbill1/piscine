/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 01:09:45 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/06 03:07:47 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!((*(str + i) >= 'A' && *(str + i) <= 'Z')
				|| (*(str + i) >= 'a' && *(str + i) <= 'z')))
		{
			return (0);
		}
		i ++ ;
	}
	return (1);
}

/*int	main(void)
{
	char c[] = "";
	printf("%d", ft_str_is_alpha(c));
}*/
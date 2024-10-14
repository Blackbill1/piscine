/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 06:59:26 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/10 01:36:59 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (!(*(str + i) >= 'A' && *(str + i) <= 'Z'))
		{
			return (0);
		}
		i ++ ;
	}
	return (1);
}

/*int	main(void)
{
	char c[] = "aaaaaaa";
	printf("%d", ft_str_is_uppercase(c));
}*/

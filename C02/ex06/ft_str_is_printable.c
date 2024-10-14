/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 07:05:09 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/10 01:37:32 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) <= 31 || *(str + i) == 127)
		{
			return (0);
		}
		i ++ ;
	}
	return (1);
}

/*int	main(void)
{
	char c[] = "bon\ajour";

	printf("%d", ft_str_is_printable(c));
}*/

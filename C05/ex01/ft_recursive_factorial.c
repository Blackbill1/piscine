/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:56:55 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/11 12:33:37 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}

/*int	main(void)
{
	printf("%d", ft_recursive_factorial(-7));
}*/

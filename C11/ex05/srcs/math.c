/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 21:55:11 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/23 21:00:52 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/myHeader.h"
#include <unistd.h>

int	ft_add(int a, int b)
{
	return (a + b);
}

int	ft_sub(int a, int b)
{
	return (a - b);
}

int	ft_mul(int a, int b)
{
	return (a * b);
}

int	ft_div(int a, int b)
{
	return (a / b);
}

int	ft_mod(int a, int b)
{
	return (a % b);
}

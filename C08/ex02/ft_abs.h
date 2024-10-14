/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-dref <tle-dref@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 23:34:24 by tle-dref          #+#    #+#             */
/*   Updated: 2024/07/16 04:52:08 by tle-dref         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}

# define ABS(Value)	abs(Value)

#endif
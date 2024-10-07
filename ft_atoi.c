/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:04:25 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/16 11:16:14 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(int c)
{
	if ((c <= 13 && c >= 9) || c == 32)
		return (1);
	return (0);
}

static int	ft_sign(int sign)
{
	if (sign == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long		r;
	long		check;

	i = 0;
	sign = 1;
	r = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		check = r * 10 + (str[i] - 48);
		if (check < r)
			return (ft_sign(sign));
		r *= 10;
		r += (str[i] - 48);
		i++;
	}
	return ((int)(r * sign));
}

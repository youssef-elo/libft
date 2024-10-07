/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:59:48 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/15 20:00:02 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counter(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*r;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_counter(n);
	r = (char *)malloc((len + 1) * sizeof(char));
	if (r == NULL)
		return (NULL);
	r[len] = '\0';
	len--;
	if (n == 0)
		r[0] = '0';
	if (n < 0)
	{
		n *= -1;
		r[0] = '-';
	}
	while (n)
	{
		r[len] = (n % 10) + 48;
		len--;
		n /= 10;
	}
	return (r);
}

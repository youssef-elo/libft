/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:49:41 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/22 14:40:42 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pd;
	unsigned char	*ps;
	int				i;

	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (NULL);
	}
	if (dst == src)
		return (dst);
	while (n)
	{
		pd[i] = ps[i];
		i++;
		n--;
	}
	return (dst);
}

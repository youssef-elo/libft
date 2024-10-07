/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:49:32 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/22 15:06:27 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*pd;
	unsigned char	*ps;
	int				i;

	pd = (unsigned char *)dst;
	ps = (unsigned char *)src;
	i = len - 1;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (i >= 0)
		{
			pd[i] = ps[i];
			i--;
		}
		return (dst);
	}
	ft_memcpy(dst, src, len);
	return (dst);
}

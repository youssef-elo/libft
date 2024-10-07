/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 12:38:21 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/22 14:56:24 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	if (size > 0 && ((18446744073709551615UL / size) < count))
		return (NULL);
	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, (count * size));
	return (p);
}

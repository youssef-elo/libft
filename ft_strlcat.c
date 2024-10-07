/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:59:51 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/21 17:35:44 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;

	i = 0;
	slen = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (slen);
	dlen = ft_strlen(dst);
	i = dlen;
	if (i < dstsize)
	{
		ft_strlcpy(dst + i, src, dstsize - i);
		return (slen + dlen);
	}
	return (dstsize + slen);
}

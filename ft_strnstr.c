/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:08:57 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/22 14:10:59 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	nlen;

	i = 0;
	nlen = 0;
	if (haystack == NULL && needle && len == 0)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (needle[nlen])
		nlen++;
	while (haystack[i] && len)
	{
		if (len < nlen)
			return (NULL);
		if (ft_strncmp(&haystack[i], needle, nlen) == 0)
			return ((char *)&haystack[i]);
		i++;
		len--;
	}
	return (NULL);
}

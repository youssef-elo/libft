/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:45:00 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/03 18:02:58 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*r;

	len = ft_strlen(s1) + 1;
	r = (char *)malloc(len * sizeof(char));
	if (r == NULL)
		return (NULL);
	ft_strlcpy(r, s1, len);
	return (r);
}

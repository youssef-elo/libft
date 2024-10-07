/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:25:35 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/22 14:37:35 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(const char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*r;
	int		slen;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (*s1 == 0)
		return (ft_strdup(""));
	slen = ft_strlen(s1) - 1;
	while (ft_check(set, s1[i]) && s1[i])
		i++;
	if (i == slen + 1)
		return (ft_strdup(""));
	while (ft_check(set, s1[slen]) && slen > 0)
		slen--;
	r = (char *)malloc((slen - i + 2) * sizeof(char));
	if (r == NULL)
		return (NULL);
	ft_strlcpy(r, s1 + i, slen - i + 2);
	return (r);
}

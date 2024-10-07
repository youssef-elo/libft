/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yel-ouaz <yel-ouaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:40:36 by yel-ouaz          #+#    #+#             */
/*   Updated: 2023/11/19 23:21:45 by yel-ouaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_freearray(char **s, int i)
{
	while (i)
	{
		free(s[i - 1]);
		i--;
	}
	free(s);
	return (NULL);
}

static int	ft_cwords(char const *s, char c)
{
	int	co;
	int	i;

	i = 0;
	co = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			co++;
		i++;
	}
	return (co);
}

static char	**ft_strs(char const *s, char **rs, char c)
{
	int	len;
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (s[i])
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			len++;
			i++;
		}
		if (len > 0)
		{
			rs[j] = ft_substr(s, (i - len), len);
			if (rs[j] == NULL)
				return (ft_freearray(rs, j));
			j++;
		}
	}
	return (rs);
}

char	**ft_split(char const *s, char c)
{
	int		w;
	char	**rs; 

	if (s == NULL) 
		return (NULL);
	w = ft_cwords(s, c);
	rs = (char **)malloc((w + 1) * sizeof(char *));
	if (rs == NULL)
		return (NULL);
	rs[w] = NULL;
	return (ft_strs(s, rs, c));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:17:16 by mrochet           #+#    #+#             */
/*   Updated: 2020/12/01 12:02:05 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*ret;
	int		a;

	i = 0;
	a = 0;
	len = ft_strlen(s1) - 1;
	while (ft_is_in(s1[i], set) == 1 && s1[i])
		i++;
	while (ft_is_in(s1[len], set) == 1)
		len--;
	if (len < 0)
		return (ft_calloc(1, 1));
	if (!(ret = malloc(sizeof(char *) * ((len - i) + 1))))
		return (0);
	while (i <= len)
	{
		ret[a] = s1[i];
		i++;
		a++;
	}
	ret[a] = '\0';
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:21:19 by mrochet           #+#    #+#             */
/*   Updated: 2020/12/01 11:13:59 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*ret;
	size_t		size;
	size_t		i;

	i = 0;
	if (ft_strlen(s) - start < len)
		size = ft_strlen(s);
	else
		size = len;
	if (!(ret = (char *)malloc(sizeof(char) * (size))))
		return (0);
	while (s[start] && i < size)
	{
		ret[i] = s[start];
		i++;
		start++;
	}
	ret[i] = '\0';
	return (ret);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmasse <cmasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:10:34 by cmasse            #+#    #+#             */
/*   Updated: 2020/11/24 18:32:43 by cmasse           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*n_s;

	n_s = s;
	i = 0;
	while (i < n && n_s[i] != c)
		i++;
	if (n_s[i] == '\0' || i == n)
		return (NULL);
	else
	{
		s += i;
		return ((void*)s);
	}
}

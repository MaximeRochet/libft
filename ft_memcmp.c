/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmasse <cmasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 18:30:38 by cmasse            #+#    #+#             */
/*   Updated: 2020/11/24 18:32:23 by cmasse           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*n1;
	unsigned char	*n2;

	n1 = (unsigned char*)s1;
	n2 = (unsigned char*)s2;
	i = 0;
	while (i < n)
	{
		if (n1[i] != n2[i] || n1[i] == '\0')
			return (n1[i] - n2[i]);
		i++;
	}
	return (0);
}

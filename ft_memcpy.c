/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmasse <cmasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:00:18 by cmasse            #+#    #+#             */
/*   Updated: 2020/11/24 18:33:26 by cmasse           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*n_dst;
	const char	*n_src;

	n_dst = dst;
	n_src = src;
	i = 0;
	while (i++ < len)
		*n_dst++ = *n_src++;
	return (dst);
}

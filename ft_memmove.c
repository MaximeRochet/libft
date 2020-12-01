/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmasse <cmasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:05:05 by cmasse            #+#    #+#             */
/*   Updated: 2020/12/01 11:18:55 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*n_dst;
	char		*n_src;

	n_dst = (char *)dst;
	n_src = (char *)src;
	i = 0;
	if (dst > src)
	{
		while (len > 0)
		{
			n_dst[len - 1] = n_src[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			n_dst[i] = n_src[i];
			i++;
		}
	}
	return (dst);
}

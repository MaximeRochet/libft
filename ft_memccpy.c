/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmasse <cmasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 17:20:28 by cmasse            #+#    #+#             */
/*   Updated: 2020/11/25 12:03:20 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t		i;
	char		*n_dst;
	const char	*n_src;

	n_dst = (char *)dst;
	n_src = (char *)src;
	i = 0;
	while (i++ < n && n_src[i] != c)
		*n_dst++ = *n_src++;
	*n_dst = *n_src;
	if (n_src[i] == '\0')
		return (NULL);
	else
	{
		dst += i + 1;
		return (dst);
	}
}*/

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*n_dst;
	unsigned char	*n_src;

	n_dst = (unsigned char *)dst;
	n_src = (unsigned char *)src;
	while (n-- > 0)
	{
		*n_dst = *n_src;
		if (*n_src == c)
			return (n_dst + 1);
		n_dst++;
		n_src++;
	}
	return (NULL);
}

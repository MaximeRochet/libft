/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmasse <cmasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 16:05:05 by cmasse            #+#    #+#             */
/*   Updated: 2020/11/25 14:22:38 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*n_dst;
	const char	*n_src;
	char		*temp;

	n_dst = dst;
	n_src = src;
	i = 0;
	temp = NULL;
	while (i++ < len)
	{
		*temp = *n_src;
		*n_dst++ = *temp;
		temp++;
		n_src++;
	}
	return (dst);
}*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*n_dst;
	char		*n_src;

	n_dst = (char *)dst;
	n_src = (char *)src;
	i = 0;
	//comparaison de quelle adresse est en premiere pour copier dans un sens ou dans l'autre
	if (dst > src)
	{
		//si l'adresse est de dst est plus loin dans la memoire aue celle de dst, on copie en commencant par la fin
		while(len > 0)
		{
			n_dst[len-1] = n_src[len-1];
			len--;
		}
	}
	//sinon par le debut
	else
	{
		while(i < len)
		{
			n_dst[i] = n_src[i];
			i++;
		}
	}
	return(dst);
}

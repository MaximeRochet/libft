/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 12:23:38 by mrochet           #+#    #+#             */
/*   Updated: 2020/11/26 13:01:59 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int size1;
	int size2;
	char *ret;
	int i;
	
	size1 = strlen(s1);
	size2 = strlen(s2);
	if (!(ret =  malloc(sizeof(char const*)*(size1 + size2 + 1))))
		return (0);
	i = 0;
	while(s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	i = 0;
	while(s2[i]) 
		ret[size1++] = s2[i++];
	ret[size1] = '\0';
	return (ret);
}

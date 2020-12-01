/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmasse <cmasse@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 15:33:40 by cmasse            #+#    #+#             */
/*   Updated: 2020/11/25 15:29:56 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	i = -1;
	y = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[++i] && y <= len)
	{
		//if (haystack[i] != needle[y])
		//	i++;
		while (haystack[i+y] == needle[y] && y <= len)
		{
			//i++;
			y++;
			if (needle[y] == '\0' || y == len)
				return ((char *)(haystack += (i - y)));
		}
		//i++;
		y = 0;
	}
	if (y >= len)
		return ((char *)(haystack += i));
	return (0);
}*/


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		//if (haystack[i] != needle[y])
		//	i++;
		while (haystack[i+y] == needle[y] && i+y < len)
		{
			//i++;
			y++;
			if (needle[y] == '\0' || y == len)
				return ((char *)(haystack += (i)));
		}
		i++;
		y = 0;
	}
	//if (y >= len)
	//	return ((char *)(haystack += i));
	return (0);
}

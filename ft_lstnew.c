/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:02:14 by mrochet           #+#    #+#             */
/*   Updated: 2020/11/28 15:30:03 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
	t_list *new_elem;
	
	if(!(new_elem = malloc(sizeof(t_list))))
		return(0);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);

}

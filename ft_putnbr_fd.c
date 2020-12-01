/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrochet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 11:32:34 by mrochet           #+#    #+#             */
/*   Updated: 2020/11/28 13:34:39 by mrochet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_putnbr_fd(int n, int fd)
{
	long int num;

	num = (long int)n;
	if (num < 0)
	{
		ft_putchar_fd('-',fd);
		num *= -1 ;
	}
	if (num > 9)
		ft_putnbr_fd(num/10 , fd);
	ft_putchar_fd((num % 10 + 48), fd);
}*/

void    ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648 )
    {
        write(fd, "-2147483648", 11);
        return ;
    }
    if (n < 0)
    {
        n *= -1;
        write(fd, "-", 1);
    }
    if (n > 9)
        ft_putnbr_fd(n / 10, fd);
    n = n % 10 + '0';
    write(fd, &n, 1);
}

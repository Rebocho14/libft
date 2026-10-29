/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:44:43 by panibal           #+#    #+#             */
/*   Updated: 2026/10/27 11:47:12 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putnbr_fd(int n, int fd)
{
    long    nb;
    
    nb = n;
    if (nb < 0)
    {
        write(fd, "-", 1);
        nb = -nb;
    }
    if (nb >= 0 && nb <= 9)
        ft_putchar_fd((nb + '0'), fd);
    if (nb >= 10)
    {
        ft_putnbr_fd(nb / 10, fd);
        ft_putnbr_fd(nb % 10, fd);
    }
}
int main()
{
    ft_putnbr_fd(-2147483648, 1);
}

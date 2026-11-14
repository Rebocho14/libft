/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 11:05:45 by panibal           #+#    #+#             */
/*   Updated: 2026/11/12 02:51:46 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    res = 0;
    i = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return (res * sign);
}
// int main()
// {
//     printf("%d\n", ft_atoi("  -1234"));
//     printf("%d\n", ft_atoi("  +5678"));
//     printf("%d\n", ft_atoi("  42"));
//     printf("%d\n", ft_atoi("  -0"));
//     printf("%d\n", ft_atoi("  +0"));
//     printf("%d\n", ft_atoi("  -2147483648"));
//     printf("%d\n", ft_atoi("  +2147483647"));
// }
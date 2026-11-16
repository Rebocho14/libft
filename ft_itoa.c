/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 16:12:18 by panibal           #+#    #+#             */
/*   Updated: 2026/11/16 13:26:51 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_numbers(int n)
{
    int count;

    count = 0;
    if (n <= 0)
        count++;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}
char    *ft_itoa(int n)
{
    char    *str;
    int     len;
    long    num;

    num = n;
    len = count_numbers(num);
    str = malloc((len + 1) * sizeof(char));
    if (!str)
        return (NULL);
    str[len] = '\0';
    if (num < 0)
    {
        str[0] = '-';
        num = -num;
    }
    if (num == 0)
        str[0] = '0';
    while (num != 0)
    {
        str[--len] = (num % 10) + '0';
        num /= 10;
    }
    return (str);
}
// int main()
// {
//     char *str = ft_itoa(-12345);
//     printf("%s\n", str);
//     free(str);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 16:44:39 by panibal           #+#    #+#             */
/*   Updated: 2026/10/31 00:01:38 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1,const char *s2, size_t n)
{
    size_t    i;
    unsigned    char    *str1;
    unsigned    char    *str2;

    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;
    i = 0;

    while (i < n)
    {
        if (str1[i] != str2[i] || str1[i] == '\0')
            return(str1[i] - str2[i]);
        i++;
    }
    return(0)   
}
int main()
{
    printf("%d %d\n", ft_strncmp("\xFF", "\x01", n), strncmp("\xFF", "\x01", n));
    printf("%d %d\n", ft_strncmp(" ", "\t", n), strncmp(" ", "\t", n));
}
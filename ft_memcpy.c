/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:44:24 by panibal           #+#    #+#             */
/*   Updated: 2026/11/12 02:55:37 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char            *d;
    const   char    *s;
    size_t          i;
    
    d = (char *)dest;
    s = (const char *)src;
    i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dest);
}
int main()
{
    char str1[] = "uga buga";
    char str2[20];

    ft_memcpy(str2, str1, 9);
    printf("%s\n", str2);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:44:06 by panibal           #+#    #+#             */
/*   Updated: 2026/10/28 18:49:39 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned    char    *str;
    unsigned    char    chr;
    int i;

    chr = c;
    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == chr)
        {
            return ((char *)(str  + 1));
        }
        i++;
        n--;
    }
    return (NULL);
}
 int main()
{
	char *string = ft_memchr("uga buga", 'b', 8);
	printf("%s", string);
} 
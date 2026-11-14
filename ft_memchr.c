/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:44:06 by panibal           #+#    #+#             */
/*   Updated: 2026/11/12 03:00:28 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned    char    *str;
    unsigned    char    chr;
    size_t				i;

    chr = c;
    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        if (str[i] == chr)
        {
            return ((void *)(str + i));
        }
        i++;
    }
    return (NULL);
}
// int main()
//{
//	char *string = ft_memchr("uga buga", 'b', 8);
//	int *str = memchr("uga buga", 'b', 8);
//	printf("%s\n", string);
//	printf("%i", (int)str);

//} 
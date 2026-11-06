/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:39:19 by panibal           #+#    #+#             */
/*   Updated: 2026/11/02 22:05:55 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void    *ptr;
    size_t  max;
    
    if (num == 0 || size == 0)
        return (malloc(0));
    max = size * num;
    if (size != 0 && num > max / size)
        return (NULL);
    ptr = malloc(num * size);
    if (!ptr)
        return (NULL);
    ft_bzero(ptr, num * size);
    return (ptr);
}
int main ()
{
    int item = 10;
    int *nbritem = ft_calloc(item, sizeof(int));
    int i = 0;
    while (i < item)
    {
        nbritem[i] = i + 1;
        i++;
        
    }
    i = 0;
    while (i < item)
    {
    printf("%d", nbritem[i]);
        i++;
    }
    
    free(nbritem);
}
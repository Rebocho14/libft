/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 15:39:19 by panibal           #+#    #+#             */
/*   Updated: 2026/11/17 11:50:12 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && !(SIZE_MAX > num * size))
		return (NULL);
	ptr = malloc(num * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, num * size);
	return (ptr);
}
//int main ()
//{
//    int item = 10;
//    int *ptritem = ft_calloc(item, sizeof(int));
//    int i = 0;
//    while (i < item)
//    {
//        ptritem[i] = i + 1;
//        i++; 
//    }
//    i = 0;
//    while (i < item)
//    {
//    printf("%d", ptritem[i]);
//        i++;
//    }
//    free(ptritem);
//}
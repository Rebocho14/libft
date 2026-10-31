/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 12:31:57 by panibal           #+#    #+#             */
/*   Updated: 2026/10/31 15:56:27 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned	char	*dst;
	unsigned	char	*sor;
	size_t				i;

	dst = (unsigned	char *) dest;
	sor = (unsigned char *) src;

	if (dst > sor)
	{
		while (n > 0)
		{
			n--;
			dst[n] = sor[n];
		}
	}
	else
		ft_memcpy(dst, sor, n);
	return (dest);
}
int main()
{
	char	b[] = "0123456789";
	char	a[] = "abc";

	ft_memmove(a + 2, a, 5);
	printf("1: %s | %s\n", a, b);

	ft_memmove(a, a + 2, 5);	
	printf("2: %s | %s\n", a, b);

	ft_memmove(a, a + 3, 0);
	printf("3: %s | %s\n", a, b);
}
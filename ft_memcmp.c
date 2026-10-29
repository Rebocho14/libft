/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:40:04 by panibal           #+#    #+#             */
/*   Updated: 2026/10/28 15:40:06 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	size_t			i;
	unsigned char	*byte1;
	unsigned char	*byte2;

    i = 0;
	byte1 = (unsigned char *)s1;
	byte2 = (unsigned char *)s2;
	while (i < size)
	{
		if (byte1[i] != byte2[i])
		{
			return (byte1[i] - byte2[i]);
		}
		i++;
	}
	return (0);
}
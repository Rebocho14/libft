/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 14:21:51 by panibal           #+#    #+#             */
/*   Updated: 2026/11/02 14:23:42 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*src == '\0')
	{
		return ((char *)str);
	}
	while (str[i] && i < size)
	{
		j = 0;
		while ((i + j) < size && str[i + j] == src[j])
		{
			if (src[j + 1] == '\0')
			{
				return ((char *)(str + i));
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
int main()
{
	printf("%s", ft_strnstr("uga buga buga", "buga", 13));
}
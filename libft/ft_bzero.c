/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:08:51 by panibal           #+#    #+#             */
/*   Updated: 2026/10/22 13:34:45 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned	char *str;
	int				 i;

	str = (unsigned char *)s;
	i = 0;
	while (n != 0)
	{
		str[i] = '\0';
		i++;
		n--;
	}
}
/*int main()
{
	char str[8];
	ft_bzero(str, 8);
	str[2] = 'a';
	str[3] = 'a';
	str[4] = 'a';

	printf("%s\n", str + 2);

}*/
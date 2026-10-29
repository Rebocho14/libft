/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:56:55 by panibal           #+#    #+#             */
/*   Updated: 2026/10/29 15:32:14 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strrchr(const char *s, int c)
{
	unsigned	char	*str;
	unsigned	char	chr;
	size_t				i;

	i = 0;
	chr = c;
	str = ft_strlen(s);
	while (i < str)
	{
		if (str[i] == chr)
		{
			return (str + i);
		}
		i--;
	}
	return (NULL);
}
int main()
{
	char *str = strrchr("uga buga", 'u');
	printf("%s", str);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:15:16 by panibal           #+#    #+#             */
/*   Updated: 2026/10/29 14:34:25 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return ((char *)ft_memchr(s, c, ft_strlen(s + 1)));
}
int main()
{
	char str[] = "uga buga";
	printf("%s", strchr(str, 'C'));
}

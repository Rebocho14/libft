/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:15:16 by panibal           #+#    #+#             */
/*   Updated: 2026/11/12 02:58:46 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return ((char *)ft_memchr(s, c, ft_strlen(s) + 1));
}
int main()
{
	char *str = ft_strchr("uga buga", 'b');
	printf("%s", str);
}
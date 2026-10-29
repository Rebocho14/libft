/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 13:56:55 by panibal           #+#    #+#             */
/*   Updated: 2026/10/29 14:14:29 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
{
	size_t	len;
	char	chr;
	
	len = ft_strlen(s);
	chr = (char)c;
	while (len >= s)
	{
		if (chr == s)
		{
			return (s);
		}
		len--;
	}
	return (NULL);
}

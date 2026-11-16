/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 02:53:19 by panibal           #+#    #+#             */
/*   Updated: 2026/11/15 16:38:20 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*start;
	char const	*end;

	if (!s1)
		return (NULL);
	end = s1 + (ft_strlen(s1) - 1);
	while (ft_strchr(set, *s1) && s1 < end)
		s1++;
	start = s1;
	while (ft_strchr(set, *end) && end >= start)
		end--;
	return (ft_substr(start, 0, ++end - start));
}
int main()
{
    char *s1 = "  \t\nHello, World!\n\t  ";
    char *set = " nigga";
    char *trimmed = ft_strtrim(s1, set);
    if (trimmed)
    {
        printf("Original: '%s'\n", s1);
        printf("Trimmed: '%s'\n", trimmed);
        free(trimmed);
    }
}
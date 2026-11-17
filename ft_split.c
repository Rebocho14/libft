/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:18:48 by panibal           #+#    #+#             */
/*   Updated: 2026/11/17 00:25:44 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(const char *str, char c)
{
	int	i;
	int	count;
	int	word;

	word = 0;
	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && word == 0)
		{
			word = 1;
			count++;
		}
		else if (str[i] == c)
			word = 0;
		i++;
	}
	return (count);
}
static void free_all(char **str, int j)
{
	while (j >= 0)
	{
		free(str[j]);
		j--;
	}
	free(str);
}
static int	word_len(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{

}
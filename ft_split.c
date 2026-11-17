/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 18:18:48 by panibal           #+#    #+#             */
/*   Updated: 2026/11/17 14:50:52 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_word(char const	*str, char c)
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

static void	free_all(char **str, int j)
{
	while (j >= 0)
	{
		free(str[j]);
		j--;
	}
	free(str);
}

static int	word_len(char const	*str, char c, int word_num)
{
	int	i;
	int	count;
	int	start;

	count = 0;
	i = 0;
	start = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			start = i;
		}
		while (str[i] && str[i] != c)
			i++;
		if (count == word_num)
		{
			return (i - start);
		}
		i++;
	}
	return (i);
}

static	int	start(char const	*str, char c, int word)
{
	int	i;
	int	start;

	start = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			start++;
			if (word == start)
			{
				return (i);
			}
		}
		while (str[i] && str[i] != c)
			i++;
		i++;
	}
	return (start);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		i;
	int		strs;

	strs = count_word(s, c);
	array = malloc(sizeof(char *) * (count_word(s, c) + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < strs)
	{
		array[i] = ft_substr(s, start(s, c, i + 1), word_len(s, c, i + 1));
		if (!array[i])
		{
			free_all(array, i);
			return (NULL);
		}
		i++;
	}
	array[i] = NULL;
	return (array);
}

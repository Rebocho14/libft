/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/31 10:58:02 by panibal           #+#    #+#             */
/*   Updated: 2026/10/31 11:26:22 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
    unsigned int i;

    if (!s || !f)
        return ;
    i = 0;
    while (s[i])
    {
        f(i, &s[i]);
        i++;
    }
}
//void	upper_even_pos(unsigned int i, char *c)
//{
//	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
//	{
//		*c = *c - 32;
//	}
//}
//int main()
//{
//	char str[] = "uga buga";

//	ft_striteri(str, upper_even_pos);
//	printf("%s\n", str);
//}
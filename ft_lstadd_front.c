/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:21:35 by panibal           #+#    #+#             */
/*   Updated: 2026/11/06 17:28:17 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    new -> next = *lst;
    *lst = new;
}
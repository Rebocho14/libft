/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:33:53 by panibal           #+#    #+#             */
/*   Updated: 2026/11/06 17:48:30 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned    int ft_lstsize(t_list *lst)
{
    int i;

    if (!lst)
        return (0);
    i = 1;
        while (lst->next != NULL)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
int main(void)
{
	t_list *head = ft_lstnew("uga");
	t_list *sndnode = ft_lstnew("buga");
	t_list *thrdnode = ft_lstnew("buga");

	head->next = sndnode;
	sndnode->next = thrdnode;

	printf("%i", ft_lstsize(head)); 
}

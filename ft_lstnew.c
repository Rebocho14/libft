/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 17:00:06 by panibal           #+#    #+#             */
/*   Updated: 2026/11/06 17:44:17 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list  *ft_lstnew(void *content)
{
    t_list  *node;

    node = malloc(sizeof(t_list));
    if(!node)
        return (NULL);
    node->content = content;
    node->next = NULL;
    return (node);
}
// int main(void)
// {
//     t_list  *head;                         
//     t_list  *second_node;                       

//     head = ft_lstnew("uga");
//     second_node = ft_lstnew("buga");
//     head->next = second_node;
//     printf("%s\n", (char *)head->content);          
//     printf("%s\n", (char *)head->next->content);    
//     free(second_node);
//     free(head);
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: panibal <panibal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/16 14:02:07 by panibal           #+#    #+#             */
/*   Updated: 2026/11/16 18:14:15 by panibal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/*void	delet(void *cont)
{
	free(cont);
}
int main()
{
	t_list *head;
	t_list *snd;
	t_list *thrd;

	head = ft_lstnew(ft_strdup("asd"));
	snd = ft_lstnew(ft_strdup("abc"));
	thrd = ft_lstnew(ft_strdup("231"));
	ft_lstadd_back(&head, snd);
	ft_lstadd_back(&snd, thrd);
	printf("%s\n", (char *)head->next->next->content);
	ft_lstdelone(head, &delet);
	ft_lstdelone(snd, &delet);
	ft_lstdelone(thrd, &delet);
	printf("%s", (char *)head->next->next->content);
}*/
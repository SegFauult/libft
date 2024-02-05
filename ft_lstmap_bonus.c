/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aylamgha <aylamgha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 17:28:23 by aylamgha          #+#    #+#             */
/*   Updated: 2023/12/02 21:49:08 by aylamgha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*head;
	t_list	*tmp;
	void	*ptr;

	tmp = lst;
	head = NULL;
	if (lst && f && del)
	{
		while (tmp)
		{
			ptr = f(tmp -> content);
			new_node = ft_lstnew(ptr);
			if (!new_node)
			{
				del(ptr);
				ft_lstclear(&head, del);
				return (NULL);
			}
			ft_lstadd_back(&head, new_node);
			tmp = tmp -> next;
		}
	}
	return (head);
}
// void del(void *content)
// {
// 	free(content);
// }
// void *f(void *d){
// 	int x = 0;
// 	char *char_d;
// 	char_d = (char *)d;
// 	char *to_return = ft_strdup(char_d); // Duplicate the content
//     if (!to_return)
//         return NULL;
// 	while (char_d[x] != 0)
// 	{
// 		to_return[x] = char_d[x] + 32;
// 		x++;
// 	}
// 	return (to_return);
// }
// #include <stdio.h>
// int main()
// {
// 	t_list	*node1 = ft_lstnew("KHJLN");
// 	t_list	*node2 = ft_lstnew("KHVKB");
// 	t_list	*node3 = ft_lstnew("KJBKB");
// 	node1->next = node2;
// 	node2->next = node3;
// 	t_list *node = ft_lstmap(node1, f, del);
// 	while (node)
// 	{
// 		printf("%s\n", node -> content);
// 		node = node -> next;
// 	}
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:19:57 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/20 17:17:04 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function iterates through the original linked list,
applies the function f to the content of each node,
and creates a new linked list containing the results.
It does not modify the original list,
but instead builds a separate list with newly allocated nodes.*/

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_obj;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_obj = ft_lstnew(new_content);
		if (!new_obj)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_obj);
		lst = lst->next;
	}
	return (new_lst);
}

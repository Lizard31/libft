/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:19:31 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/17 15:35:35 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Clears the entire linked list, freeing all nodes and their content.
Iterates through the list, deleting each node using the provided 'del' function.
After all nodes are deleted, the list pointer is set to NULL.*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, *del);
		*lst = tmp;
	}
	free(*lst);
	*lst = NULL;
}

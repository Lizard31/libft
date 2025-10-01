/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 16:56:24 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/17 15:34:58 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Adds the node 'new' at the end of the linked list pointed to by '*lst'.
If the list is empty, 'new' becomes the first node.*/

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

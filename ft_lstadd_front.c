/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:39:06 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/17 15:35:17 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Adds the node 'new' at the beginning of the linked list pointed to by '*lst'.
If the list is empty, 'new' becomes the first node.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:39:51 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:08:07 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns the last node in the linked list.
Iterates through the list until the last node (where 'next' is NULL) is found.
Returns NULL if the list is empty.*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}

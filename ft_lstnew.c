/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:39:03 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:09:12 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Creates a new node for the linked list with the given 'content'.
Allocates memory for the node, sets the 'content' and initializes 'next' to NULL.
Returns a pointer to the newly created node, or NULL if memory allocation fails.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

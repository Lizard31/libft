/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 16:19:12 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:07:31 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Deletes a single node in the linked list.
Calls the 'del' function to free the content of the node,
then frees the memory allocated for the node itself.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

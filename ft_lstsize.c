/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 15:39:35 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:10:02 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns the number of nodes in the linked list.
Iterates through the list,
counting each node until reaching the end (NULL).*/

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*count;
	int		i;

	count = lst;
	i = 0;
	while (count)
	{
		count = count->next;
		i++;
	}
	return (i);
}

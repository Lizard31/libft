/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:52:34 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 11:04:34 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates memory for an array of 'count' elements of 'size' bytes each,
and initializes all bytes to zero.*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int	main(void)
// {
// 	size_t	n;
// 	int		*std;
// 	int		*ft;

// 	n = 5;
// 	std = calloc(n, sizeof(int));
// 	ft = ft_calloc(n, sizeof(int));
// 	printf("%d\n", memcmp(std, ft, n * sizeof(int)));
// 	return (0);
// }

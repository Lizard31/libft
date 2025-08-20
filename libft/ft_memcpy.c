/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:04 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:12:47 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies 'n' bytes from memory area 'src' to memory area 'dest'.
Returns a pointer to the destination memory area 'dest'.
If either 'dest' or 'src' is NULL, returns NULL.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*csrc = (const char *)src;
	char		*cdest;

	cdest = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (n--)
		*cdest++ = *csrc++;
	return (dest);
}

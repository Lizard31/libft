/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:52:58 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:10:52 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Searches for the first occurrence of the character 'c'
in the first 'n' bytes of the memory area 's'.
Returns a pointer to the found character or NULL if not found.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p = (const unsigned char *)s;

	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*s;

// 	s = "abcdef";
// 	printf("%s\n", (char *)ft_memchr(s, 'b', 6));
// 	printf("%s\n", (char *)memchr(s, 'd', 6));
// 	return (0);
// }

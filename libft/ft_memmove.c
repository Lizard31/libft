/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:07 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/17 15:36:02 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Safely copies 'len' bytes from memory area 'src' to memory area 'dst',
handling cases where the memory regions overlap. If the destination
is before the source, it copies from the start. If the destination
is after the source, it copies backwards to avoid overwriting data.
Returns a pointer to the destination memory area 'dst'.
Returns NULL if either 'dst' or 'src' is NULL.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;

	d = (unsigned char *)dst;
	if (!dst && !src)
		return (NULL);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
// int	main(void)
// {
// 	char	std[20] = "0123456789";
// 	char	ft[20] = "0123456789";

// 	memmove(std + 2, std, 8);
// 	ft_memmove(ft + 2, ft, 8);
// 	printf("%s\n", std);
// 	printf("%s\n", ft);
// 	return (0);
// }

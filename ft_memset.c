/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:09 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 11:01:58 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Fills the first 'n' bytes of the memory area pointed to by 's'
with the byte value 'c'.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = (unsigned char)c;
	return (s);
}

// int	main(void)
// {
// 	char	a[10] = {0};
// 	char	b[10] = {0};

// 	memset(a, 'A', 5);
// 	ft_memset(b, 'B', 5);
// 	printf("%.10s\n", a);
// 	printf("%.10s\n", b);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:01 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:11:54 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compares the first 'n' bytes of memory areas 's1' and 's2'.
Returns 0 if the memory areas are equal, a positive value if 's1' > 's2',
or a negative value if 's1' < 's2'.*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a = (const unsigned char *)s1;
	const unsigned char	*b = (const unsigned char *)s2;

	while (n--)
	{
		if (*a != *b)
			return (*a - *b);
		a++;
		b++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*s2;

// 	s1 = "abcde";
// 	s2 = "aBcdE";
// 	printf("%d\n", memcmp(s1, s2, 5));
// 	printf("%d\n", ft_memcmp(s1, s2, 5));
// }

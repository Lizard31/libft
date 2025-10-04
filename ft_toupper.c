/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:37 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 16:56:29 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts a lowercase letter `c` to its uppercase equivalent.
If `c` is not a lowercase letter, it returns `c` unchanged.*/

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'b';
// 	printf("%c\n", toupper(c));
// 	printf("%c\n", ft_toupper(c));
// 	return (0);
// }

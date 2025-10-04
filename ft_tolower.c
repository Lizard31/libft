/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:34 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 16:55:38 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts an uppercase letter `c` to its lowercase equivalent.
If `c` is not an uppercase letter, it returns `c` unchanged.*/

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int	main(void)
// {
// 	char	c;

// 	c = 'B';
// 	printf("%c\n", tolower(c));
// 	printf("%c\n", ft_tolower(c));
// 	return (0);
// }

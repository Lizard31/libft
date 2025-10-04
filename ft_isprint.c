/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:52:56 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 11:08:10 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns 1 (true) if the character is printable.*/

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// int	main(void)
// {
// 	int	ch;

// 	ch = 'A';
// 	printf("%d\n", isprint(ch));
// 	printf("%d\n", ft_isprint(ch));
// 	return (0);
// }

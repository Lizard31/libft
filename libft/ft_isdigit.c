/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:52:53 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/19 17:01:04 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns 1 (true) if the character is numerical.*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// int main ()
// {
// 	char c = '9';
// 	printf ("everytime i turn around i see %d", ft_isdigit (c));
// 	return (0);
// }

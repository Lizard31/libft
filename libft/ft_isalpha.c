/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:52:47 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/20 15:13:52 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns 1 (true) if the character is alphabetical.*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// int main ()
// {
// 	char c = '9';
// 	printf ("everytime i turn around i see %d", ft_isalpha (c));
// 	return (0);
// }

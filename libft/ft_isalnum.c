/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:52:45 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 11:05:45 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns 1 (true) if the character is alphanumerical.*/

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	main(void)
// {
// 	printf("%d\n", ft_isalnum('9'));
// 	return (0);
// }

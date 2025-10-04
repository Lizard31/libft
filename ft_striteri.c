/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:56 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/16 18:35:49 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Iterates through the string `s`,
applying function `f` to each character,
passing both the index and the character's address.
The iteration stops at the null-terminator.*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

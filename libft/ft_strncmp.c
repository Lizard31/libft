/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:26 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 16:51:31 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Compares up to `n` characters of two strings `s1` and `s2`.
It returns a negative value if `s1` is smaller (alphabetically),
a positive value if `s1` is larger,
and 0 if the strings are equal.*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

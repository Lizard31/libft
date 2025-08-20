/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:11 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:21:18 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Locates the first occurrence of the character 'c' in the string 's'.
Returns a pointer to the character in the string,
or NULL if the character is not found.
If 'c' is the null terminator, it returns a pointer to the end of the string.*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

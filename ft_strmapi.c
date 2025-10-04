/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:54:13 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 16:48:45 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Applies the function `f` to each character of string `s`,
passing the index and character, and stores the result in a new string.
It returns the new string, or `NULL` if memory allocation fails.*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))

{
	unsigned int	i;
	char			*res;

	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:31 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/17 15:36:39 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns a pointer to the last occurrence of character `c`
in the string `s`. If `c` is the null-terminator, it returns a pointer
to the end of the string. If `c` is not found, it returns `NULL`.*/

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			cc;

	cc = (char)c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			res = (char *)(s + i);
		i++;
	}
	if (cc == '\0')
		return ((char *)(s + i));
	return (res);
}

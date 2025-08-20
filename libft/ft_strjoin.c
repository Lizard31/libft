/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:54:02 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 16:43:32 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates and returns a new string that is the concatenation
of `s1` and `s2`. It first copies the contents of `s1` to the new string,
then appends the contents of `s2`. The resulting string is null-terminated.
If memory allocation fails, it returns `NULL`.*/

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		a;
	int		b;

	a = 0;
	b = 0;
	new = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!new)
		return (NULL);
	while (s1[a])
	{
		new[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		new[a + b] = s2[b];
		b++;
	}
	new[a + b] = '\0';
	return (new);
}

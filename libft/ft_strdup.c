/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:14 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:21:46 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Duplicates the string 's1' by allocating memory
and copying its content into a new string.
Returns a pointer to the newly allocated string,
or NULL if memory allocation fails.*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*dup;
	size_t	i;

	len = ft_strlen(s1);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// int	main(void)
// {
// 	const char	*src = "Hawk tuah, spit on that thang.";
// 	char		*std;
// 	char		*ft;

// 	std = strdup(src);
// 	ft = ft_strdup(src);
// 	printf("%s\n", std);
// 	printf("%s\n", ft);
// 	return (0);
// }

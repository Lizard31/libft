/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:54:16 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/16 18:36:47 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Removes all characters from the beginning and
end of the string `s1`
that are present in the string `set`. It returns a
new string with the trimmed result.
`to_trim` checks if a character `c` is in the `set`.
`new_str` creates a new string from `s1` starting
at index `start` and with length `len`.*/

#include "libft.h"

static int	to_trim(const char *set, char c);
static char	*new_str(const char *s1, size_t start, size_t end);

char	*ft_strtrim(const char *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[j]))
		j--;
	return (new_str(s1, i, j - (i - 1)));
}

static char	*new_str(const char *s1, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s1[start + i];
		i++;
	}
	return (str);
}

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*original;
// 	char	*set;
// 	char	*trimmed;

// 	original = "hjhjwhjwjn  \t\nHello, World!  \n\t hjhjwhjwjn";
// 	set = "hjhjwhjwjn \n\t";
// 	trimmed = ft_strtrim(original, set);
// 	printf("Original: '%s'\n", original);
// 	printf("Trimmed: '%s'\n", trimmed);
// 	free(trimmed);
// 	return (0);
// }

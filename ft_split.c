/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:54 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/24 21:35:32 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Splits the string 's' into an array of words,
separated by the character 'c'.
'count_words': Counts how many words (sequences
of characters not equal to 'c') exist in 's'.
'word': Extracts a single word from 's' starting at
index 'i', stopping at 'c' or end of string.
'put_words': Allocates and fills an array with the
words obtained by the 'word' function.
The function returns an array of strings (words),
or NULL if memory allocation fails.*/

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*word(char const *s, char c, size_t *i)
{
	char	*word;
	size_t	t;

	while (s[*i] == c)
		(*i)++;
	t = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
	word = (char *)malloc(*i - t + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + t, *i - t + 1);
	return (word);
}

static char	**put_words(char **words, const char *s, char c)
{
	size_t	y;
	size_t	t;

	y = 0;
	t = 0;
	while (s[t] != '\0')
	{
		if (s[t] != c)
		{
			words[y] = word(s, c, &t);
			if (!words[y])
			{
				while (y > 0)
					free(words[--y]);
				free(words);
				return (NULL);
			}
			y++;
		}
		else
			t++;
	}
	words[y] = NULL;
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;

	if (!s)
		return (NULL);
	words = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!words)
		return (NULL);
	return (put_words(words, s, c));
}

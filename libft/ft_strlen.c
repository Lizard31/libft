/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:23 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 16:47:48 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Returns the length of the string `s` by counting characters
until the null-terminator is encountered.*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
// int main(void)
// {
// 	const char *s = "Hawk tuah, spit on that thang.";
// 	printf("%zu\n", ft_strlen(s));
// 	return (0);
// }

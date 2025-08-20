/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:58:11 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/17 15:35:08 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts an integer 'n' into a null-terminated string representation.

Returns the number of characters needed to represent 'nbr' as a string,
including space for a minus sign if negative.

Allocates memory for the result string of length 'len' + 1 (for null-terminator),
and sets the last character to '\0'.

Fills the string 'result' with the digits of 'nbr',
handling negative numbers and placing digits from the end.*/

#include "libft.h"

static int	int_len(long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
	{
		count++;
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

static char	*pre_conv(int len)
{
	char	*tmp;

	tmp = malloc(len + 1);
	if (!tmp)
		return (NULL);
	tmp[len] = '\0';
	return (tmp);
}

static char	*extra_func(long nbr, char *result, int i)
{
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		result[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	long	nbr;
	int		len;
	char	*result;
	int		i;

	nbr = n;
	len = int_len(nbr);
	result = pre_conv(len);
	i = len - 1;
	if (!result)
		return (NULL);
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	return (extra_func(nbr, result, i));
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(42));
// 	printf("%s\n", ft_itoa(-42));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	printf("%s\n", ft_itoa(2147483647));
// 	return (0);
// }

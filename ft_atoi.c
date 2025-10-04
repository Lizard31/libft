/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:52:42 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 10:58:29 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Converts the initial part of a string to an integer,
handling optional whitespace, + and - signs.*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	char	test1[] = "234";
// 	char	test2[] = "+6543";
// 	char	test3[] = "-1234";
// 	char	test4[] = "9B123";
// 	int		a;
// 	int		b;
// 	int		c;
// 	int		d;

// 	a = ft_atoi(test1);
// 	b = ft_atoi(test2);
// 	c = ft_atoi(test3);
// 	d = ft_atoi(test4);
// 	printf("%d, %d, %d, %d\n", a, b, c, d);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:51 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:16:29 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Writes the string 'str' to the file descriptor 'fd'.
Iterates through the string, using 'write'
to output each character individually.*/

#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

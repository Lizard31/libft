/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:46 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:16:51 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Writes the string 'str' followed by a newline to the file descriptor 'fd'.
Iterates through the string and uses 'write' to output each character,
then writes a newline at the end.*/

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}

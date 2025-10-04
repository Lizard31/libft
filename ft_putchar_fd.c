/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:53:43 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 15:14:26 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Writes a single character 'c' to the file descriptor 'fd'.
Uses the 'write' system call to output the character.*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

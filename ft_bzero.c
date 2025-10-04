/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbordian <tbordian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:52:38 by tbordian          #+#    #+#             */
/*   Updated: 2025/07/15 11:02:44 by tbordian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Sets the first 'n' bytes of the memory area pointed to by 's' to zero.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

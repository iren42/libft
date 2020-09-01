/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:58:36 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:45:43 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** bzero - zero a byte string
** DESCRIPTION
** 	The bzero() function erases the data in the n bytes of the memory
**	starting at the location pointed to by s, by writing zeroes
**	(bytes containing '\0') to that area.
**
** RETURN VALUE
**	None.
*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	size_t			len;
	unsigned char	*st;

	i = 0;
	st = s;
	len = 0;
	while (st[len])
		len++;
	while (i < n && i < len)
	{
		*(st + i) = 0;
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:58:36 by iren              #+#    #+#             */
/*   Updated: 2020/09/02 10:36:15 by iren             ###   ########.fr       */
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
	ft_memset(s, 0, n);
}

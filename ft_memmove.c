/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:03:51 by iren              #+#    #+#             */
/*   Updated: 2020/09/03 01:34:26 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** DESCRIPTION
** 	The  memmove() function copies n bytes from memory area src to memory
**	area dest.
** 	The memory areas may overlap: copying takes place as though the bytes in src
**	are first copied into a temporary array that does not overlap src or dest,
**	and the bytes are then copied from the temporary array to dest.
**
** RETURN VALUE
**  The memmove() function returns a pointer to dest.
*/

#include "libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*s;
	char			*d;
	unsigned int	i;

	i = 0;
	s = (char*)src;
	d = (char*)dest;
	if (d == s)
		return ((void*)d);
	if (s > d)
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	else
		while (n--)
			d[n] = s[n];
	return ((void*)d);
}

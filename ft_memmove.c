/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 17:03:51 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 15:01:24 by iren             ###   ########.fr       */
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

static char	*ft_strncpy_mem(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0' && i < n)
			dest[i] = '\0';
	}
	return (dest);
}

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	tmp[n + 1];
	char	*d;

	d = (char*)dest;
	s = (char*)src;
	ft_strncpy_mem(tmp, s, n);
	d = ft_strncpy_mem(d, tmp, n);
	return ((void*)d);
}

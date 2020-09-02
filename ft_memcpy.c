/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 18:14:53 by iren              #+#    #+#             */
/*   Updated: 2020/09/03 01:46:00 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcpy - copy memory area
** DESCRIPTION
** 	The  memcpy()  function  copies n bytes from memory area
** 	src to memory area dest.   The  memory  areas  must  not
** 	overlap.  Use memmove(3) if the memory areas do overlap.
** RETURN VALUE
** 	The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	s = (unsigned char*)src;
	d = (unsigned char*)dest;
	if (src == 0 && dest == 0)
		return (0);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return ((void*)d);
}

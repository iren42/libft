/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 18:14:53 by iren              #+#    #+#             */
/*   Updated: 2020/09/02 22:05:49 by iren             ###   ########.fr       */
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
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char*)src;
	d = (char*)dest;
	if (s == 0 || d == 0 || n == 0)
		return (dest);
	while (i < n)
	{
		ft_memset(&d[i], s[i], 1);
		i++;
	}
	return ((void*)d);
}

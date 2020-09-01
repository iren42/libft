/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 20:05:53 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:29:19 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memset - fill memory with a constant byte
** The memset() function fills the first n bytes of the memory area
** pointed to by s with the constant byte c.
** The memset() function returns a pointer to the memory area s.
*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		*(s2 + i) = (unsigned char)c;
		i++;
	}
	return ((void*)s2);
}

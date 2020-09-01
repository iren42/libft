/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 19:25:04 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:52:22 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memchr - scan memory for a character
** DESCRIPTION
** 	The  memchr()  function scans the initial n bytes of the memory area
**	pointed to by s for the first instance of c.
** 	Both c and the bytes of the memory area pointed to by s are interpreted
**	as unsigned char.
**
** RETURN VALUE
** 	The memchr() functions return a pointer to the matching byte or NULL
**	if the character does not occur in the given memory area.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_char;
	size_t			i;

	i = 0;
	s_char = (unsigned char*)s;
	while (i < n && s_char[i])
	{
		if (s_char[i] == (unsigned char)c)
			return ((void*)&s_char[i]);
		i++;
	}
	return ((void*)0);
}

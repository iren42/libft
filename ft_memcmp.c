/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/02 20:11:50 by iren              #+#    #+#             */
/*   Updated: 2020/09/02 22:22:03 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memcmp - compare memory areas
** DESCRIPTION
** 	The memcmp() function compares the first n bytes (each interpreted as
**	unsigned char) of the memory areas s1 and s2.
**
** RETURN VALUE
**  The  memcmp() function returns an integer less than, equal to, or greater
**	than zero if the first n bytes of s1 is found,
**  respectively, to be less than, to match, or be greater than the first
**	n bytes of s2.
**
**  For a nonzero return value, the sign is determined by the sign of the
**	difference between the first pair of bytes (interpreted as unsigned char)
**	that differ in s1 and s2.
**  If n is zero, the return value is zero.
*/

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_char;
	unsigned char	*s2_char;
	size_t			i;

	i = 0;
	s1_char = (unsigned char*)s1;
	s2_char = (unsigned char*)s2;
	while (i < n)
	{
		if (s1_char[i] != s2_char[i])
			return (s1_char[i] - s2_char[i]);
		i++;
	}
	return (0);
}

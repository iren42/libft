/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 20:28:44 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:59:19 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    strlcpy, strlcat — size-bounded string copying and concatenation
** DESCRIPTION
**  The strlcpy() and strlcat() functions copy and concatenate strings
**	respectively.  They are designed to be safer, more consistent, and less
**	error prone replacements for strncpy(3) and strncat(3).
**  Unlike those functions, strlcpy() and strlcat() take the full size of
**	the buffer (not just the length) and guarantee to NUL-terminate the
**	result (as long as size is larger than 0 or, in the case of
**  strlcat(), as long as there is at least one byte free in dst).
**	Note that a byte for the NUL should be included in size.  Also note that
**	strlcpy() and strlcat() only operate on true “C” strings.  This
**  means that for strlcpy() src must be NUL-terminated and for strlcat()
**	both src and dst must be NUL-terminated.
**
**  The strlcat() function appends the NUL-terminated string src to the end
**	of dst.  It will append at most size - strlen(dst) - 1 bytes,
**	NUL-terminating the result.
**
** RETURN VALUES
**  The strlcpy() and strlcat() functions return the total length of the
**	string they tried to create.  For strlcpy() that means the length of src.
**	For strlcat() that means the initial length of dst plus
**  the length of src.  While this may seem somewhat confusing, it was done
**	to make truncation detection simple.
*/

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	t_dest;
	size_t	t_src;
	size_t	j;
	char	*ssrc;

	t_dest = ft_strlen(dest);
	t_src = ft_strlen(src);
	j = 0;
	ssrc = (char*)src;
	if (t_dest >= size)
		return (t_src + size);
	size -= t_dest;
	while (ssrc[j] != '\0' && --size)
	{
		dest[t_dest + j] = ssrc[j];
		j++;
	}
	dest[t_dest + j] = '\0';
	return (t_dest + t_src);
}

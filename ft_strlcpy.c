/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 20:06:30 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:55:01 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    strlcpy, strlcat — size-bounded string copying and concatenation
** DESCRIPTION
**  The strlcpy() function copies strings.
**  strlcpy() takes the full size of the buffer (not just the length) and
**	guarantee to NUL-terminate the result (as long as size is larger than 0).
**  Note that a byte for the NUL should be included in size.
**  Also note that strlcpy() only operates on true “C” strings.
**  This means that for strlcpy() src must be NUL-terminated.
**
**  The strlcpy() function copies up to size - 1 characters from
**	the NUL-terminated string src to dst, NUL-terminating the result.
**
** RETURN VALUES
**  The strlcpy() function returns the total length of the string they tried
**	to create, that means the length of src.
*/

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	char	*s;
	size_t	i;

	i = 0;
	len = 0;
	s = (char*)src;
	while (s[len])
		len++;
	if (size == 0)
		return (len);
	while ((s[i]) && --size)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

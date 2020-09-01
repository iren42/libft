/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 17:01:19 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:27:51 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** memccpy - copy memory area
** DESCRIPTION
** 		The  memccpy()  function copies no more than n bytes from memory area
**		src to memory area dest, stopping when the character c is found.
**
**		If the memory areas overlap, the results are undefined.
**
** RETURN VALUE
**		The memccpy() function returns a pointer to the next character
**		in dest after c,
**		or NULL if c was not found in the first n characters of src.
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char*)src;
	d = (char*)dest;
	while (s[i] && i < n && s[i] != c)
	{
		d[i] = s[i];
		i++;
		if (s[i] == c)
		{
			d[i] = s[i];
			return (&d[++i]);
		}
	}
	if (s[i] == '\0')
		d[i] = '\0';
	if (i == n)
		return (0);
	return ((void*)&d[i]);
}

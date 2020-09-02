/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 21:12:46 by iren              #+#    #+#             */
/*   Updated: 2020/09/03 00:36:15 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    malloc, free, calloc, realloc - allocate and free dynamic memory
** DESCRIPTION
**  The  calloc() function allocates memory for an array of nmemb elements
**	of size bytes each and returns a pointer to the allocated memory.
**  The memory is set to zero.  If nmemb or size is 0, then calloc()
**  returns either NULL, or a unique pointer value that can later
**	be successfully passed to free().
**
** RETURN VALUE
**  The malloc() and calloc() functions return a pointer to the allocated
**	memory, which is suitably aligned for any built in type.
**  On error, these functions return NULL.  NULL may also be returned by a
**  successful call to malloc() with a size of zero, or by a successful
**	call to calloc() with nmemb or size equal to zero.
*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*s;

	if (nmemb == 0 || size == 0)
	{
		if (!(s = malloc(1)))
			return (0);
		return ((void*)s);
	}
	if (!(s = malloc(size * nmemb)))
		return (0);
	ft_bzero(s, size * nmemb);
	return ((void*)s);
}

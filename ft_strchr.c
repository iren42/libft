/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 14:35:20 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 00:12:19 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strchr, strrchr, strchrnul - locate character in string
** DESCRIPTION
**  The strchr() function returns a pointer to the first occurrence of the
**	character c in the string s.
** RETURN VALUE
**  The  strchr() function returns a pointer to the matched character or NULL
**	if the character is not found.
**  The terminating null byte is considered part of the string, so that
**	if c is specified as '\0', these functions return a pointer
**	to the terminator.
*/

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*st;

	i = 0;
	st = (char *)s;
	while (st[i])
	{
		if (c == st[i])
			return (&st[i]);
		i++;
	}
	if (c == '\0')
		return (&st[i]);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 16:10:18 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 00:18:08 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  strcmp, strncmp - compare two strings
** DESCRIPTION
**  The strcmp() function compares the two strings s1 and s2.  It returns
**	an integer less than, equal to, or greater than zero
**  if s1 is found, respectively, to be less than, to match, or be greater
**	than s2.
**
**  The strncmp() function is similar, except it compares only the first
**	(at most) n bytes of s1 and s2.
**
** RETURN VALUE
**  The strcmp() and strncmp() functions return an integer less than,
**	equal to, or greater than zero if s1 (or the first n bytes thereof)
**  is found, respectively, to be less than, to match, or be greater than s2.
*/

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

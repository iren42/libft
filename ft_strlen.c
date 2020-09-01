/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:20:38 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:44:22 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlen - calculate the length of a string
** DESCRIPTION
**  The strlen() function calculates the length of the string pointed to by s,
**	excluding the terminating null byte ('\0').
**
** RETURN VALUE
**  The strlen() function returns the number of characters in the string
**	pointed to by s.
*/

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t res;

	res = 0;
	while (s[res])
		res++;
	return (res);
}

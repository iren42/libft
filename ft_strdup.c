/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 20:49:58 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 00:10:15 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    strdup, strndup, strdupa, strndupa - duplicate a string
** DESCRIPTION
**  The strdup() function returns a pointer to a new string which is
**	a duplicate of the string s. Memory for the new string is obtained with
**	malloc(3), and can be freed with free(3).
**
** RETURN VALUE
**  On success, the strdup() function returns a pointer to the duplicated
**	string.  It returns NULL
**  if insufficient memory was available, with errno set to indicate
**	the cause of the error.
*/

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*res;
	char	*s;
	int		i;

	i = 0;
	s = (char*)str;
	while (s[i])
		i++;
	if (!(res = malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

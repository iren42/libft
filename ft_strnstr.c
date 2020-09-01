/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 18:05:51 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 16:51:17 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**    strnstr — locate a substring in a string
** DESCRIPTION
**  The strnstr() function locates the first occurrence of the
**  null-terminated string little in the string big, where not
**  more than len characters are searched.  Characters that appear
**  after a ‘\0’ character are not searched.
**
** RETURN VALUES
**  If little is an empty string, big is returned; if little occurs
**	nowhere in big, NULL is returned;
**  otherwise a pointer to the first character of the first occurrence of
**	little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *cbig, const char *clittle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	len++;
	if (ft_strncmp(clittle, "", 1) == 0)
		return ((char*)cbig);
	while (cbig[i] && --len)
	{
		len += j;
		j = 0;
		if (cbig[i] == clittle[j])
		{
			while (cbig[i + j] == clittle[j] && len--)
			{
				j++;
				if (clittle[j] == '\0')
					return ((char*)&cbig[i]);
			}
		}
		i++;
	}
	return (0);
}

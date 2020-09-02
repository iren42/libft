/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 23:25:57 by iren              #+#    #+#             */
/*   Updated: 2020/09/03 00:51:09 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMETERS :
**	s1 > prefix string
**	s2 > suffix string
** RETURN :
**	The new string
**	If allocation failed, NULL
*/

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char			*res;
	unsigned int	len;

	res = 0;
	if (s1 != 0)
	{
		len = ft_strlen(s1) + ft_strlen(s2);
		if (!(res = malloc(sizeof(char) * (len + 1))))
			return (0);
		ft_strlcpy(res, s1, ft_strlen(s1) + 1);
		ft_strlcat(res, s2, len + 1);
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 22:53:49 by iren              #+#    #+#             */
/*   Updated: 2020/09/02 10:55:01 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMETERS :
**	s 		> source string
**	start 	> starting index of the new string from the source string
**	len 	> maximum length of the new string
** RETURN :
** 	the new string
** 	or if allocation failed, NULL
*/

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t			slen;
	char			*res;

	slen = ft_strlen(s);
	if (slen <= start)
		return (malloc(sizeof(char) * 2));
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_memmove(res, &s[start], len);
	res[len] = '\0';
	return (res);
}

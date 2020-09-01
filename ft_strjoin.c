/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 23:25:57 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 15:16:08 by iren             ###   ########.fr       */
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

static char	*ft_strcpy(char *dest, char *src)
{
	unsigned int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static char	*ft_strcat(char *dest, char *src)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss1;
	char	*ss2;
	char	*res;

	ss1 = (char*)s1;
	ss2 = (char*)s2;
	if (!(res = malloc(sizeof(char) * (ft_strlen(ss1) + ft_strlen(ss2) + 1))))
		return (0);
	ft_strcpy(res, ss1);
	ft_strcat(res, ss2);
	return (res);
}

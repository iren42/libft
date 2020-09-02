/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:43:16 by iren              #+#    #+#             */
/*   Updated: 2020/09/02 15:03:06 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMETERS :
** s1 > string to trim
** s2 > reference set of the characters you want trimmed
** RETURN :
** The trimmed string
** Or, NULL if allocation failed
*/

#include "libft.h"

static char	*ft_mirror(char *s)
{
	char	*res;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	while (i < ft_strlen(s))
	{
		res[i] = s[len - 1];
		len--;
		i++;
	}
	res[i] = '\0';
	return (res);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*buffer;
	char			*mirror;
	char			*final;
	unsigned int	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	buffer = ft_substr(s1, i, ft_strlen(s1) - i);
	mirror = ft_mirror(buffer);
	free(buffer);
	i = 0;
	while (s1[i] && ft_strchr(set, mirror[i]))
		i++;
	buffer = ft_substr(mirror, i, ft_strlen(s1) - i);
	free(mirror);
	final = ft_mirror(buffer);
	free(buffer);
	return (final);
}

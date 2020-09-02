/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:43:16 by iren              #+#    #+#             */
/*   Updated: 2020/09/02 23:47:21 by iren             ###   ########.fr       */
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
	if (!(res = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (i < ft_strlen(s))
	{
		res[i] = s[len - 1];
		len--;
		i++;
	}
	res[i] = '\0';
	return (res);
}

static char	*ft_sub(char *s1, char const *set)
{
	unsigned int	i;
	char			*buffer;
	char			*mirror;

	i = 0;
	while (s1[i] && ft_strchr(set, (int)s1[i]))
		i++;
	if (!(buffer = ft_substr(s1, i, ft_strlen(s1) - i)))
		return (0);
	if (!(mirror = ft_mirror(buffer)))
		return (0);
	free(buffer);
	return (mirror);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char			*mirror;
	char			*final;

	if (s1 == 0 || set == 0)
	{
		if (!(final = malloc(1)))
			return (0);
		return (final);
	}
	mirror = ft_sub((char*)s1, set);
	final = ft_sub(mirror, set);
	free(mirror);
	if (final == 0)
		return (0);
	return (final);
}

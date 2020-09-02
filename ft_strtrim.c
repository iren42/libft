/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 15:43:16 by iren              #+#    #+#             */
/*   Updated: 2020/09/02 09:03:34 by iren             ###   ########.fr       */
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

static char	*ft_strtrim2(char *ss1, char *sset, char *res)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (ss1[i])
	{
		j = 0;
		while (sset[j])
		{
			if (ss1[i] == sset[j])
				break ;
			j++;
		}
		if (sset[j] == '\0')
		{
			ft_memcpy(res, &ss1[i], ft_strlen(ss1) - i);
			break ;
		}
		i++;
	}
	return (res);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*ss1;
	char	*sset;
	char	*intermediate;
	char	*final;

	ss1 = (char*)s1;
	sset = (char*)set;
	intermediate = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	final = malloc(sizeof(char) * (ft_strlen(s1) + 1));
	intermediate = ft_strtrim2(ss1, sset, intermediate);
	intermediate = ft_mirror(intermediate);
	final = ft_strtrim2(intermediate, sset, final);
	final = ft_mirror(final);
	free(intermediate);
	return (final);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 19:32:54 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 15:18:59 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_fill(char *dest, char *str, int len)
{
	int i;

	i = 0;
	dest = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

static int		ft_nb_c(char *s, char c)
{
	int i;
	int nb_c;

	i = 0;
	nb_c = 0;
	while (s[i])
	{
		if (s[i] == c)
			nb_c++;
		i++;
	}
	return (nb_c);
}

static void		split_loop(char *str, char c, int *i, int *len)
{
	while (str[*i] != c && str[*i])
	{
		(*len)++;
		(*i)++;
	}
}

char			**ft_split(char const *s, char c)
{
	char	*str;
	int		len;
	int		i;
	int		a;
	char	**res;

	a = 0;
	i = 0;
	str = (char*)s;
	res = malloc(sizeof(char*) * (ft_nb_c(str, c) + 2));
	while (str[i] && a <= ft_nb_c(str, c))
	{
		len = 0;
		split_loop(str, c, &i, &len);
		if (len > 0)
		{
			res[a] = ft_fill(res[a], &str[i - len], len);
			a++;
		}
		i++;
	}
	res[a] = 0;
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:35:12 by iren              #+#    #+#             */
/*   Updated: 2020/09/02 12:16:44 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMETERS :
** s	> string to iterate
** (*f)	> function to apply to each character of 's'
** RETURN :
** The resulting string
** Or, NULL if allocation failed
*/

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
			int, char))
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!s)
		return (0);
	if (!(str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (0);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:35:12 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 19:11:19 by iren             ###   ########.fr       */
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
	char			*ss;
	char			*str;

	i = 0;
	ss = (char*)s;
	if (!(str = malloc(sizeof(char) * (ft_strlen(s)))))
		return (0);
	while (ss[i])
	{
		str[i] = f(i, ss[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 14:35:20 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 21:06:17 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*st;

	i = 0;
	st = (char*)s;
	while (st[i])
	{
		if (c == st[i])
			return (&st[i]);
		i++;
	}
	if (c == '\0')
		return (&st[i]);
	return (0);
}

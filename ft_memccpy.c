/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 17:01:19 by iren              #+#    #+#             */
/*   Updated: 2020/09/04 21:10:51 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	s = (unsigned char*)src;
	d = (unsigned char*)dest;
	while (i < n)
	{
		if (s[i] == (unsigned char)c)
		{
			ft_memset(&d[i], (int)s[i], 1);
			return ((void*)&d[++i]);
		}
		ft_memset(&d[i], (int)s[i], 1);
		i++;
	}
	if (i == n)
		return (0);
	return ((void*)&d[i]);
}

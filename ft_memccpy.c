/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/14 17:01:19 by iren              #+#    #+#             */
/*   Updated: 2020/09/03 10:13:53 by iren             ###   ########.fr       */
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
	while (i < n && s[i] != (unsigned char)c)
	{
		d[i] = s[i];
		i++;
		if (s[i] == (unsigned char)c)
		{
			d[i] = s[i];
			return (&d[++i]);
		}
	}
	if (s[i] == '\0')
		d[i] = '\0';
	if (i == n)
		return (0);
	return ((void*)&d[i]);
}

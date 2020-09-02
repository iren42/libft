/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 20:06:30 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 21:17:22 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	len;
	char	*s;
	size_t	i;

	i = 0;
	len = 0;
	s = (char*)src;
	while (s[len])
		len++;
	if (size == 0)
		return (len);
	while ((s[i]) && --size)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

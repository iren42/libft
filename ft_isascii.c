/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:35:16 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:21:03 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isascii()
**  checks whether c is a 7-bit unsigned char value that fits into
**	the ASCII character set.
**
** RETURN VALUE
**  The values returned are nonzero if the character c falls into the
**	tested class, and zero if not.
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

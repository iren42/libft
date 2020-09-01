/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:27:20 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:25:01 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalpha()
**  checks for an alphabetic character; in the standard "C" locale, it is
**	equivalent to (isupper(c) || islower(c)).
**  In some locales, there may be additional characters  for  which  isalpha()
**  is true—letters which are neither uppercase nor lowercase.
**
** RETURN VALUE
**  The values returned are nonzero if the character c falls into the
**	tested class, and zero if not.
*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

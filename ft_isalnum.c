/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 13:32:17 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 15:06:14 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** isalnum()
**	checks for an alphanumeric character; it is equivalent to
**	(isalpha(c) || isdigit(c)).
** RETURN VALUE
**  The values returned are nonzero if the character c falls into the tested
**	class, and zero if not.
*/

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

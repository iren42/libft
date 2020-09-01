/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 23:55:25 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:17:58 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMATERS :
** c	> character to write
** fd	> the file desciptor on which to write
** RETURN :
** none
*/

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

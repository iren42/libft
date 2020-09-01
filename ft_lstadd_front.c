/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:35:37 by iren              #+#    #+#             */
/*   Updated: 2020/08/31 23:11:50 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMETRES :
** alst	> adresse du pointeur vers le premier element de la liste
** new	> adresse du pointeur vers l'element a rajouter a la liste
** RETOUR :
** None
** DESCRIPTION :
** Ajoute l'element 'new' au debut de la liste
*/

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (*alst == 0)
	{
		*alst = new;
		return ;
	}
	if (*alst != 0 && new != 0)
	{
		new->next = *alst;
		*alst = new;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 18:10:23 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 00:22:04 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMETRES :
** alst	> adresse du pointeur vers le premier element de la liste
** new	> adresse du pointeur vers l'element a rajouter a la liste
** RETOUR :
** None
** DESCRIPTION :
** Ajoute l'element new a la fin de la liste
*/

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *last_element;

	if (*alst == 0)
	{
		*alst = new;
	}
	else
	{
		last_element = ft_lstlast(*alst);
		last_element->next = new;
	}
}

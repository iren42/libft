/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 22:42:32 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 00:13:31 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMETRES :
** 1	> l'adresse du pointeur vers un element
** 2	> l'adresse de la fonction permettant de supprimer le contenu
**			d'un element
** RETOUR :
** None
** DESCRIPTION :
** Supprime et libere la memoire de l'element passe en parametre, et tous les
** elements qui suivent, a l'aide de del et de free(3).
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *ptr;

	(void)ptr;
	while (*lst)
	{
		del((*lst)->content);
		ptr = (*lst);
		*lst = (*lst)->next;
		free(ptr);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 17:27:40 by iren              #+#    #+#             */
/*   Updated: 2020/09/01 00:20:21 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** PARAMETRES :
**	lst		> l'element a free
**	(*del)	> l'adresse de la fonction permettant de supprimer le contenu
**		de l'element
** RETOUR :
** 	None
** DESCRIPTION :
** 	Libere la memoire de l'element passe en argument en utilisant la fonction
** 	del puis avec free(3). La memoire de next ne doit pas etre free
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}

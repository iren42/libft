/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iren <iren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/05 00:17:36 by iren              #+#    #+#             */
/*   Updated: 2020/09/05 00:49:06 by iren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list			*res;

	if (lst == 0)
		return (0);
	if (!(res = malloc(sizeof(t_list) * (ft_lstsize(lst)))))
		return (0);
	while (lst->next)
	{
		if ((res = ft_lstnew(f(lst))) == 0)
		{
			ft_lstclear(*res, del);
			return (0);
		}
		lst = lst->next;
		res = res->next;
	}
	return (res);
}

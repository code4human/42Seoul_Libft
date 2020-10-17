/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 16:38:55 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/17 16:38:58 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [PROTOTYPE]
** t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
**
** [PARAMETER]
** #1. The address if a pointer to an element
** #2. The address of the function used to iterate on the list.
** #3. The address of the function used to delete the content of an element if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*curr;

	if ((lst == NULL) || (f == NULL) || (del == NULL))
		return (NULL);
	if (!(new = ft_lstnew((*f)(lst->content)));
		return (NULL);
	curr = new;
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(curr->next = ft_lstnew((*f)(lst->content))))
		{
			ft_lstclear(&new, del);
			ft_lstclear(&curr, del);
			return (NULL);
		}
		ft_lstadd_back(&new, curr->next);
		curr = curr->next;
		lst = lst->next;
	}
	return (new);
}

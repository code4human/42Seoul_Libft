#include "libft.h"

/*
** [PROTOTYPE]
** void ft_lstadd_back(t_list **lst, t_list *new);
**
** [PARAMETER]
** #1. The address of a pointer to the first link of a list..
** #2. The address of a pointer to the element to be add to the list.
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if ((lst == NULL) || (new == NULL))
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	new->next = last->next;
	last->next = new;
}

#include "libft.h"

/*
** [PROTOTYPE]
** void	ft_lstadd_front(t_list **lst, t_list *new);
**
** [PARAMETER]
** #1. The address of a pointer to the first link of a list.
** #2. The address of a pointer to the element to be added to the list.
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if ((lst == NULL) || (new == NULL))
		return ;
	new->next = *lst;
	*lst = new;
}

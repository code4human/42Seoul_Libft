#include "libft.h"

/*
** [PROTOTYPE]
** void ft_lstiter(t_list *lst, void (*f)(void *));
**
** [PARAMETER]
** #1. The address of a pointer to an element.
** #2. The address of the function used to iterate on the list.
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if ((lst == NULL) || (f == NULL))
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

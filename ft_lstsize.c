#include "libft.h"

/*
** [PROTOTYPE]
** int ft_lstsize(t_list *lst);
**
** [PARAMETER]
** #1. The beginning of the list.
*/

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}

#include "libft.h"

/*
** [PROTOTYPE]
** t_list *ft_lstlast(t_list *lst);
**
** [PARAMETER]
** #1. The beginning of the list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);  	
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

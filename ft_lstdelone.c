#include "libft.h"

/*
** [PROTOTYPE]
** void ft_lstdelone(t_list *lst, void (*del)(void *));
**
** [PARAMETER]
** #1. The element to free.
** #2. The address of the function used to delete the content.
*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if ((lst == NULL) || (del == NULL))
		return ;
	del(lst->content);
	free(lst);
}

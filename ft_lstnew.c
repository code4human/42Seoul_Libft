#include "libft.h"

/*
** [PROTOTYPE]
** t_list *ft_lstnew(void *content);
**
** [PARAMETER]
** #1. The content to create the new element with.
*/

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

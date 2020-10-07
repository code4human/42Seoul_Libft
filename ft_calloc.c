/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 12:41:29 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/04 12:42:50 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [PROTOTYPE]
** #include <stdlib.h>
** void		*calloc(size_t count, size_t size);
*/

void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
	void		*res;
	unsigned char	*char_res;

	res = malloc(count * size);
	if (!(res))
		return (NULL);
	char_res = res;
	i = 0;
	while (i < count)
	{
		char_res[i] = 0;
		i++;
	}
	return (char_res);
}

/*
**int	main(void)
**{
**	printf("====ft_calloc====\n");
**	printf("%p\n", ft_calloc(5, 1));
**	printf("%ld\n", sizeof(ft_calloc(5, 1)));
**	printf("====calloc====\n");
**	printf("%p\n", calloc(5, 1));
**	printf("%ld\n", sizeof(calloc(5, 1)));
**}
*/

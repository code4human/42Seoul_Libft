/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 05:23:01 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/04 07:57:40 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*
** [PROTOTYPE]
** #include <string.h>
** void		*memset(void *s, int c, size_t n);
**/

/*
void	*ft_memset(void *s, int c, size_t n)
{

}
*/

int		main(void)
{
	char str[8] = "42seoul";
	printf("%s", memset(str, 3, 2));
	return (0);
}

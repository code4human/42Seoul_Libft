/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 06:16:40 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/17 19:59:00 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [PROTOTYPE]
** #include <string.h>
** void *memmove(void *dst, const void *src, size_t len);
*/

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*char_dst;
	unsigned char	*char_src;
	unsigned char	temp_array[len];

	char_dst = (unsigned char *)dst;
	char_src = (unsigned char *)src;
	i = -1;
	while (++i < len)
		temp_array[i] = char_src[i];
	i = -1;
	while (++i < len)
		char_dst[i] = temp_array[i];
	return (dst);
}

/*
**int	main(void)
**{
**	char	chars1[7];
**	char	chars2[7];
**
**	printf("====ft_memmove====\n");
**	printf("%s\n%p\n", chars1,
**				ft_memmove(chars1, "Born2Code", sizeof(chars1)-1));
**	printf("====memmove====\n");
**	printf("%s\n%p\n", chars2, memmove(chars2, "Born2Code", sizeof(chars2)-1));
**	return (0);
**}
*/

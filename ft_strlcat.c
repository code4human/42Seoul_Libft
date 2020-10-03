/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 08:22:12 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/01 09:27:54 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** [PROTOTYPE]
** #include <string.h>
** size_t  strlcat(char *dst, const char *src, size_t dstsize);
*/

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t d;
	size_t dst_init_len;
	size_t src_len;

	dst_init_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	d = dst_init_len;
	while (i <= dstsize - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[dstsize] = '\0';
	return (dst_init_len + src_len);
}

int		main(void)
{
	char chararray1[10] = {'a', 'b', 'c', '\n', ' ', ' ', ' ', ' ', ' ', ' '};
	char chararray22[10] = {'a', 'b', 'c', '\n', ' ', ' ', ' ', ' ', ' ', ' '};
		
	printf("====ft_strlcat====\n");
	printf("%zd\n", ft_strlcat(chararray1, "42cursus", 5));
	printf("%s\n", chararray1);
	printf("====strlcat====\n");
	printf("%zd\n", strlcat(chararray22, "42cursus", 5));
	printf("%s\n", chararray22);
	return (0);
}

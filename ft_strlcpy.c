/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 03:03:05 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/08 06:16:40 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [PROTOTYPE]
** #include <string.h>
** size_t	strlcpy(char *restrict dst, const char *restrict src, size_t dstsize);
**
** [WARNING]
** The "restrict" qualifier is part of the c99 standard.
** It is therefore forbidden to include it in your prototypes and 
** to compile it with the flag -std=c99. 
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t srcsize;

	srcsize = ft_strlen(src);
	i = 0;
	while ((i < srcsize) && (i <= dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	if (!(dstsize == 0))
		dst[dstsize] = '\n';

	return (srcsize);
}

/*
**int		main(void)
**{
**	char chararray1[20];
**	char chararray2[20];
**
**	printf("====ft_strlcpy====\n");
**	printf("%lu\n", ft_strlcpy(chararray1, "abcdefghij", sizeof(chararray1)));
**	printf("%s\n", chararray1);
**	printf("====strlcpy====\n");
**	printf("%lu\n", strlcpy(chararray2, "abcdefghij", sizeof(chararray2)));
**	printf("%s\n", chararray2);
**	return (0);
**}
*/

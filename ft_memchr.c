/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:23:02 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/07 14:23:05 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
/*
** [PROTOTYPE]
** #include <string.h>
** void	*memchr(const void *s, int c, size_t n);
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*char_s;

	char_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (char_s[i] == (unsigned char)c)
			return (s + i);
		i++;
	}
	return (NULL);
}


int   main(void)
{
	char    chararray1[20];
	char    chararray2[20];

	printf("====ft_memchr====\n");
	printf("%s\n%p\n", chararray1, ft_memchr("42Cadet", 101, sizeof(chararray1)));
	printf("====memchr====\n");
	printf("%s\n%p\n", chararray2, memchr("42Cadet", 101, sizeof(chararray2)));
	return (0);
}

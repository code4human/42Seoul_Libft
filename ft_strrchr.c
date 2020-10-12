/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:24:04 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/13 06:31:16 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [PROTOTYPE]
** #include <string.h>
** char *strrchr(const char *s, int c);
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	s_len;

	s_len = ft_strlen(s);
	while (s_len > 0)
	{
		if (s[s_len - 1] == (char)c)
			return ((char *)s + (s_len - 1));
		s_len--;
	}
	return (NULL);
}

/*
**int	main(void)
**{
**	// Search the location of character 'e' (decimal 101 on ascii)
**	// Check the address if the return value is NULL pointer
**	printf("====ft_strrchr====\n");
**	printf("%s\n%p\n", ft_strrchr("42Seoul_Cadet", 101), 
**				ft_strrchr("42Seoul_Cadet", 5));
**	printf("====strrchr====\n");
**	printf("%s\n%p\n", strrchr("42Seoul_Cadet", 101), 
**				strrchr("42Seoul_Cadet", 5));
**	return (0);
**}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/07 14:23:42 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/13 06:38:25 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [PROTOTYPE]
** #include <string.h>
** char	*strchr(const char *s, int c);
*/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*
**int	main(void)
**{
**	// Search the location of character 'e' (decimal 101 on ascii)
**	// Check the address if the return value is NULL pointer
**	printf("====ft_strchr====\n");
**	printf("%s\n%p\n", ft_strchr("42Seoul_Cadet", 101),
**				ft_strchr("42Seoul_Cadet", 5));
**	printf("====strchr====\n");
**	printf("%s\n%p\n", strchr("42Seoul_Cadet", 101),
**				strchr("42Seoul_Cadet", 5));
**	return (0);
**}
*/

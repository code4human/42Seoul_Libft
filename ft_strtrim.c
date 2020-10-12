/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 06:17:25 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/13 06:15:55 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [PROTOTYPE]
** char	*ft_strtrim(char const *s1, char const *set);
**
** [WARNING]
** If you need subfunctions to write a complex function,
** you should define these subfunctions as static to avoid publishing them
** with your library.
*/

static	bool	ft_is_occur(char const *set, char const c)
{
	size_t		i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (true);
		i++;
	}
	return (false);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		len;
	char		*s2;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	len = ft_strlen(s1);
	i = 0;
	while (i < len && ft_is_occur(set, s1[i]))
		i++;
	while ((len >= 1) && ft_is_occur(set, s1[len - 1]))
		len--;
	if ((len - 1) - i <= 0)
		return (ft_strdup(""));
	s2 = (char *)malloc(sizeof(char) * ((len - 1) - i) + 1);
	if (!(s2))
		return (NULL);
	ft_strlcpy(s2, (s1 + i), (len - 1) - i + 1);
	return (s2);
}

/*
**int	main(void)
**{
**	printf("====ft_strtrim====\n");
**	printf("====BCDEF====\n");
**	printf("%s\n", ft_strtrim("ABCDEF", "EAC"));
**	printf("====BCD====\n");
**	printf("%s\n", ft_strtrim("ABCDEF", "AFE"));
**	return (0);
**}
*/

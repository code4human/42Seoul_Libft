/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/10 06:17:10 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/10 06:17:12 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [PROTOTYPE]
** char *ft_strjoin(char const *s1, char const *s2);
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*s3;
	
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if ((!(s1) && !(s2)) || !(s3))
		return (NULL);
	ft_strlcpy(s3, s1, s1_len);
	ft_strlcpy((s3 + s1_len), s2, s2_len);
	return (s3);
}

/*
**int	main(void)
**{
**	printf("====ft_strjoin====\n");
**	printf("%s\n", ft_strjoin("From_LaPiscine_To_", "42Cursus"));
**	return (0);
**}
*/

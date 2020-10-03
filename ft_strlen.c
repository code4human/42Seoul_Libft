/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taeekim <taeekim@42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/01 00:29:34 by taeekim           #+#    #+#             */
/*   Updated: 2020/10/01 07:44:59 by taeekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** [PROTOTYPE]
** #include <string.h>
** size_t	strlen(const char *s);
*/

size_t	ft_strlen(const char *s)
{
	size_t i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

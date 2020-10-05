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
	unsigned char 
}
*/
int		main(void)
{
    printf("====Compare Data Type 'int' & 'unsigned char' For memset====\n");
	int nums1[5];
	unsigned char nums2[5];
	int i;

	memset(nums1, 10, sizeof(nums1));
	memset(nums2, 10, sizeof(nums2));

	for (i = 0; i < 5; i++)
		printf("nums1[%d] = %d \n", i, nums1[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("nums2[%d] = %d \n", i, nums2[i]);
    printf("\n");
    printf("====Compare Customized ft_memset & Original memset====\n");
    char chars1[10];
    char chars2[10];
    // ft_memset(chars1, 's', sizeof(chars1));
    // memset(chars1, 's', sizeof(chars2));
	// printf("ft_memset : %s \nmemset : %s", chars1, chars2);
	return (0);
}

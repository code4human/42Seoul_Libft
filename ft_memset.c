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
*/

void	*ft_memset(void *s, int c, size_t n)
{
    size_t i;
	unsigned char char_c;
    unsigned char *char_s;

    char_c = c;
    char_s = s;
    i = 0;
    while (i < n)
    {
        *char_s++ = char_c;
        i++;
    }
    return (char_s);
}

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
    char chars1[11] = "BornToCode";
    char chars2[11] = "BornToCode";
    
    ft_memset(chars1, 's', sizeof(chars1));
    memset(chars2, 's', sizeof(chars2));
    printf("ft_memset : %s\n", chars1);
    printf("memset : %s\n", chars2);
    printf("ft_memset size : %ld\n", sizeof(chars1));
	printf("ft_memset : %s \nmemset : %s\n", chars1, chars2);
	
    int idx = 0;
    printf("chars1\n");
    while (chars1[idx] != '\0')
    {
        printf("%c", chars1[idx]);
        idx++;
    }
    printf("\n");
    return (0);
}

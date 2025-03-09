/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 03:00:11 by apregitz          #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// appends source at the end of dst
// only copy to the amount of bytes that are given as parameter
//  iif the dstsize is to small the function returns the lenght that it needs

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c_dst;
	size_t	c_src;
	size_t	i;

	c_src = 0;
	i = 0;
	c_dst = 0;
	while (c_dst < dstsize && dst[c_dst])
		c_dst++;
	while (src[c_src])
		c_src++;
	if (dstsize <= c_dst)
		return (dstsize + c_src);
	while (src[i] && (c_dst + i) < dstsize - 1)
	{
		dst[c_dst + i] = src[i];
		i++;
	}
	if ((c_dst + i) < dstsize)
		dst[c_dst + i] = '\0';
	return (c_dst + c_src);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str1[5] = "test";
//     char str2[8] = "hi ";
//     size_t num;
//     num = ft_strlcat(str2, str1, 8);
// 	// num = strlcat(str2, str1, 5);
//     printf("%s\n%d\n", str2, num);
//     return 0;
// }
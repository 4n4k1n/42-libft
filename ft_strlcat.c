/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 03:00:11 by apregitz          #+#    #+#             */
/*   Updated: 2025/01/05 13:54:39 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	c_dest;
	unsigned int	c_src;
	unsigned int	i;

	c_src = 0;
	i = 0;
	c_dest = 0;
	while (c_dest < size && dest[c_dest])
		c_dest++;
	while (src[c_src])
		c_src++;
	if (size <= c_dest)
		return (size + c_src);
	while (src[i] && (c_dest + i) < size - 1)
	{
		dest[c_dest + i] = src[i];
		i++;
	}
	if ((c_dest + i) < size)
		dest[c_dest + i] = '\0';
	return (c_dest + c_src);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char str1[5] = "test";
//     char str2[8] = "hi ";
//     unsigned int num;
//     num = ft_strlcat(str2, str1, 8);
// 	// num = strlcat(str2, str1, 5);
//     printf("%s\n%d\n", str2, num);
//     return 0;
// }
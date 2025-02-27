/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:37:10 by apregitz          #+#    #+#             */
/*   Updated: 2025/02/26 22:59:59 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy the string form source to dest and return dest

#include "../libft.h"

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str1[7] = "test";
// 	char str2[7] = "llllll";
// 	int i = 0;

// 	ft_strcpy(str2, str1);
// 	while (i < 7)
// 	{
// 		printf("%c", str2[i]);
// 		i++;
// 	}
// 	return (0);
// }

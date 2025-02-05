/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:49:01 by apregitz          #+#    #+#             */
/*   Updated: 2025/02/05 15:44:22 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// append source at thwe end of dest

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	int	start;
	int	i;

	i = 0;
	start = 0;
	while (dest[i])
		i++;
	while (src[start])
	{
		dest[i + start] = src[start];
		start++;
	}
	dest[i + start] = '\0';
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
	char str1[5] = "test";
	char str2[8] = "hi ";

	ft_strcat(str2, str1);
	printf("%s", str2);
	return (0);
} */
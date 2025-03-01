/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:50:10 by apregitz          #+#    #+#             */
/*   Updated: 2025/02/26 23:00:45 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// appends source to the end of dest up to the given len
// returns dest

#include "../libft.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	start;
	unsigned int	i;

	i = 0;
	start = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[start] && start < nb)
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
	char str2[11] = "llllll";
	
	ft_strncat(str2, str1, 2);
	printf("%s", str2);
	return (0);
} */

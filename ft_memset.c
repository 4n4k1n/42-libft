/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:21:30 by anakin            #+#    #+#             */
/*   Updated: 2025/01/24 14:48:47 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t  i;

    i = 0;
    while (i < len)
    {
        ((unsigned char *)b)[i] = (unsigned  char)c;
        i++;
    }
	return (b);
}

// int main(void)
// {
//     char str[] = "test test";

//     printf("%s\n", str);
//     ft_memset(str, 'X', 9);
//     printf("%s\n", str);
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 12:06:15 by anakin            #+#    #+#             */
/*   Updated: 2025/01/24 12:38:51 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = (unsigned  char)0;
        i++;
    }
}

// int main(void)
// {
//     char str[] = "test test";

//     ft_bzero(str, 2);
//     printf("%c %c %c\n", str[0], str[1], str[2]);
//     return (0);
// }

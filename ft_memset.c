/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:21:30 by anakin            #+#    #+#             */
/*   Updated: 2025/01/07 16:37:11 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
    size_t i;
    char *ch_arr;

    ch_arr = (char *)b;
    i = -1;
    while (++i < len)
        ch_arr[i] = (char)c;
    return (b);
}

int main(void)
{
    char str[] = "test";

    printf("%s\n", str);
    ft_memset(str, 'X', 4);
    printf("%s\n", str);
    return (0);
}

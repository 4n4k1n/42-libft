/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:51:49 by anakin            #+#    #+#             */
/*   Updated: 2025/01/20 14:36:39 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    size_t i;
    void *arr;

    if (size == 0)
        return (NULL);
    arr = malloc(count * size);
    i = -1;
    while (++i < (size * count))
        ((unsigned char *)arr)[i] = 0;
    return (arr);
}

// #include <stdio.h>
// int main(void)
// {
//     int *arr;

//     arr = (int *)ft_calloc(3, sizeof(int));
//     printf("%d\n%d\n%d\n", arr[0], arr[1], arr[2]);
//     free(arr);
//     return (0);
// }

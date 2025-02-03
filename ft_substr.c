/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:26:58 by anakin            #+#    #+#             */
/*   Updated: 2025/02/03 17:17:41 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    size_t real_len;
    char *arr;

    real_len = 0;
    while (s[real_len])
        real_len++;
    if (start > real_len || len == 0)
        return (NULL);
    if ((real_len - start - 1) > len)
        real_len = len;
    else
        real_len -= start - 1;
    arr = (char *)malloc(sizeof(char) * (real_len + 1));
    if (!arr)
        return (NULL);
    len = 0;
    while (len < real_len)
    {
        arr[len] = s[start + len];
        len++;
    }
    arr[len] = '\0';
    return (arr);
}

// int main(void)
// {
//     char *arr = ft_substr("this is a test!!!", 19, 0);
//     if (!arr)
//         printf("can not allocate!!!\n");
//     else
//     {
//         printf("%s\n", arr);
//         free(arr);
//     }
//     return (0);
// }

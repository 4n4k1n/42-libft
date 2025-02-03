/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 17:20:32 by anakin            #+#    #+#             */
/*   Updated: 2025/02/03 18:10:51 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    int len_s1;
    int len_s2;
    char *arr;
    int i;

    len_s1 = 0;
    while (s1[len_s1])
        len_s1++;
    len_s2 = 0;
    while (s2[len_s2])
        len_s2++;
    arr = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 2));
    if (!arr)
        return (NULL);
    i = -1;
    while (++i < len_s1 + len_s2)
    {
        if (i < len_s1)
            arr[i] = s1[i];
        else
            arr[i] = s2[i - len_s1];
    }
    arr[i] = '\0';
    return (arr);
}

// int main(void)
// {
//     char *str = ft_strjoin("This is str 1. ", "sdasdas");
//     if (!str)
//         printf("can not allocate!!!\n");
//     else
//     {
//         printf("%s\n", str);
//         free(str);
//     }
//     return (0);
// }

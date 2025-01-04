/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:27:47 by anakin            #+#    #+#             */
/*   Updated: 2025/01/05 00:01:55 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char *ft_strchr(char *str, int search_str)
{
    int i;
    int save;
    char *arr;
    
    save = -1;
    i = -1;
    while (str[++i] != '\0')
    {
        if (str[i] == search_str)
            save = i;
    }
    if (save == -1)
        return (NULL);
    arr = (char *)malloc(sizeof(char ) * (i - save + 1));
    if (!arr)
        return (NULL);
    i = -1;
    while (str[(++i) + save])
        arr[i] = str[i + save];
    arr[i] = '\0';
    return (arr);
}

// int main (void)
// {
//     char *arr;

// 	arr = ft_strchr("das ist ein test!", 'x');
// 	if (!arr)
// 		printf("Char not found!\n");
// 	else
// 		printf("%s\n", arr);
// 	free(arr);
// 	return (0);
// }

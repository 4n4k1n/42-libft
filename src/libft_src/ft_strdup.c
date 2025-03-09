/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 20:53:22 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocate the a string and copy the given string into the allocated one
// return NULL if allocation fails or the given string is empty
// esle return the allocated string

#include "libft.h"

char	*ft_strdup(const char *string)
{
	int		len;
	int		i;
	char	*new_arr;

	len = 0;
	while (string[len])
		len++;
	new_arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_arr)
		return (NULL);
	i = -1;
	while (++i < len)
		new_arr[i] = string[i];
	new_arr[i] = '\0';
	return (new_arr);
}

// #include <stdio.h>
// int main(void)
// {
//     char *str;

//     str = ft_strdup(NULL);
// 	if (!str)
// 		printf("can not allocate!!!\n");
// 	else
// 	{
// 		printf("%s\n", str);
// 		free(str);
// 	}
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 20:53:22 by anakin            #+#    #+#             */
/*   Updated: 2025/01/05 13:53:15 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *string)
{
	int		len;
	int		i;
	char	*new_arr;

	len = 0;
	while (string[len])
		len++;
	new_arr = (char *)malloc(sizeof(char ) * (len + 1));
	if (!new_arr)
		return (NULL);
	i = -1;
	while (++i < len)
		new_arr[i] = string[i];
	new_arr[i] = '\0';
	return (new_arr);
}

// int main(void)
// {
//     char *str;

//     str = ft_strdup("test test");
//     printf("%s\n", str);
//     free(str);
//     return (0);
// }
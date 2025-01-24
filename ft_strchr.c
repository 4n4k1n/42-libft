/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 21:27:47 by anakin            #+#    #+#             */
/*   Updated: 2025/01/24 14:54:40 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		save;
	char	*arr;

	save = -1;
	i = -1;
	while (s[++i] != '\0')
	{
		if (s[i] == c)
			save = i;
	}
	if (save == -1)
		return (NULL);
	arr = (char *)malloc(sizeof(char ) * (i - save + 1));
	if (!arr)
		return (NULL);
	i = -1;
	while (s[(++i) + save])
		arr[i] = s[i + save];
	arr[i] = '\0';
	return (arr);
}

// #include <stdio.h>
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

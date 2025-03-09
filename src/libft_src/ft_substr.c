/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:06:24 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocated a arr of the max size of len
// fill the arr with values from s at the possition start
// return NULL if start is bigger then the str len or len is 0
// or if allocation fails
// if succes it returns the allocated array

#include "libft.h"

static char	*ft_create_substr(size_t size)
{
	char	*arr;

	arr = malloc(size + 1);
	if (!arr)
		return (NULL);
	arr[size] = '\0';
	return (arr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (start >= s_len || len == 0)
		return (ft_create_substr(0));
	if (s_len - start < len)
		len = s_len - start;
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

// int main(void)
// {
//	 char *arr = ft_substr("this is a test!!!", 19, 0);
//	 if (!arr)
//		 printf("can not allocate!!!\n");
//	 else
//	 {
//		 printf("%s\n", arr);
//		 free(arr);
//	 }
//	 return (0);
// }

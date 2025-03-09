/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:08:12 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// acllocate a string with the lenght of the two given strings
// and copy the first string into it and appends the second at the end
// return NULL if the allocation fails
// return the allocated array if everything was succesfully

#include "libft.h"

static int	ft_get_len(const char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len_s1;
	int		len_s2;
	char	*arr;
	int		i;

	if (!s1 || ! s2)
		return (NULL);
	len_s1 = ft_get_len(s1);
	len_s2 = ft_get_len(s2);
	arr = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < len_s1 + len_s2)
	{
		if (i < len_s1)
			arr[i] = s1[i];
		else
			arr[i] = s2[i - len_s1];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

// #include <stdio.h>
// int main(void)
// {
// 	 char *str = ft_strjoin("This is str 1. ", NULL);
// 	 if (!str)
// 		 printf("can not allocate!!!\n");
// 	 else
// 	 {
// 		 printf("%s\n", str);
// 		 free(str);
// 	 }
// 	 return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 17:48:08 by apregitz          #+#    #+#             */
/*   Updated: 2025/02/26 23:01:10 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// search for to_find in str
// if found it returns the possition 
// return str if to_find is a terminator
// if not found it returns NULL

#include "../libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i_search;
	int	i_str;

	if (!to_find[0])
		return (str);
	i_search = 0;
	i_str = 0;
	while (str[i_str])
	{
		i_search = 0;
		while (to_find[i_search] && str[i_str + i_search] == to_find[i_search])
		{
			i_search++;
		}
		if (!to_find[i_search])
			return (str + i_str);
		i_str++;
	}
	return (NULL);
}

/* #include <stdio.h>
int main(void)
{
	char str1[18] = "how are you today";
	char str2[5] = "tox";
	char *found;

	found = ft_strstr(str1, str2);
	printf("%s", found);
	return 0;
} */

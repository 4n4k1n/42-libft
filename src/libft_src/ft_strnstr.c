/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:44:27 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// search for s2 in s1 to the given possition n
// if found it returns the possition of s2 in s1
// return NULL if one of the strings is NULL
// return s1 when s2 is empty
// if found it returns the possition in s1

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	if (!s2[0])
		return ((char *)s1);
	i = 0;
	while (i < len && s1[i])
	{
		j = 0;
		while (i + j < len && s1[i + j] && s2[j] && s1[i + j] == s2[j])
			j++;
		if (s2[j] == '\0')
			return ((char *)(s1 + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//	 char *found;

//	 found = ft_strnstr("this is a test!!!", "a", 9);
//	 if (!found)
//		 printf("nOT FOUND!!!\n");
//	 else
//		 printf("%s\n", found);
//	 return (0);
// }

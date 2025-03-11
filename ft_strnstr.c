/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:44:27 by anakin            #+#    #+#             */
/*   Updated: 2025/03/10 17:26:26 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// search for s2 in s1 to the given possition n
// if found it returns the possition of s2 in s1
// return NULL if one of the strings is NULL
// return s1 when s2 is empty
// if found it returns the possition in s1

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!haystack && !needle)
		return (NULL);
	if (!needle[0])
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i])
	{
		j = 0;
		while (i + j < len && haystack[i + j] && needle[j] \
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//		char *found;

//		found = ft_strnstr("this is a test!!!", "a", 9);
//		if (!found)
//			printf("nOT FOUND!!!\n");
//		else
//			printf("%s\n", found);
//		return (0);
// }

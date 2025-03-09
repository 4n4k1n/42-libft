/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:34:31 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && check_set(s1[start], set))
		start++;
	end = 0;
	while (s1[end])
		end++;
	while (end > start && check_set(s1[end - 1], set))
		end--;
	len = end - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
//     char *result;

//     printf("\nTest 1: Basic space trimming\n");
//     result = ft_strtrim("   Hello   ", " ");
//     printf("Input: \"   Hello   \"\n");
//     printf("Result: \"%s\"\n", result);
//     free(result);
//     printf("\nTest 2: Multiple character set\n");
//     result = ft_strtrim("...Hello...", ".");
//     printf("Input: \"...Hello...\"\n");
//     printf("Result: \"%s\"\n", result);
//     free(result);
//     printf("\nTest 3: Mixed characters\n");
//     result = ft_strtrim("##..Hello##..", ".#");
//     printf("Input: \"##..Hello##..\"\n");
//     printf("Result: \"%s\"\n", result);
//     free(result);
//     printf("\nTest 4: No trim needed\n");
//     result = ft_strtrim("Hello", " ");
//     printf("Input: \"Hello\"\n");
//     printf("Result: \"%s\"\n", result);
//     free(result);
//     printf("\nTest 5: Empty string\n");
//     result = ft_strtrim("", " ");
//     printf("Input: \"\"\n");
//     printf("Result: \"%s\"\n", result);
//     free(result);
//     printf("\nTest 6: String with only trimmable chars\n");
//     result = ft_strtrim("      ", " ");
//     printf("Input: \"      \"\n");
//     printf("Result: \"%s\"\n", result);
//     free(result);
//     printf("\nTest 7: Case sensitivity\n");
//     result = ft_strtrim("xXHelloxX", "x");
//     printf("Input: \"xXHelloxX\"\n");
//     printf("Result: \"%s\"\n", result);
//     free(result);
//     printf("\nTest 8: NULL tests\n");
//     result = ft_strtrim(NULL, " ");
//     printf("Input: NULL\n");
//     printf("Result: %s\n", result == NULL ? "NULL" : result);
//     return (0);
// }

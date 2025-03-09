/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsmsh.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 12:07:28 by apregitz          #+#    #+#             */
/*   Updated: 2025/03/09 17:28:26 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_cpy_strs(const char **words, char seperator, char *str,
		size_t count)
{
	size_t	i;
	size_t	j;
	int		len;

	len = 0;
	i = 0;
	while (i < count)
	{
		j = 0;
		while (words[i][j] != '\0')
		{
			str[len++] = words[i][j];
			j++;
		}
		str[len++] = seperator;
		i++;
	}
	str[--len] = '\0';
}

char	*smash(const char **words, char seperator, size_t count)
{
	int		len;
	size_t	i;
	char	*str;

	i = 0;
	len = 0;
	while (++i < count + 1)
		len += ft_strlen(words[i - 1]) + 1;
	str = malloc(len);
	if (!str)
		return (NULL);
	ft_cpy_strs(words, seperator, str, count);
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *const words[] = {"this", "is", "a", "test!"};
// 	char *str = smash(words, 4);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }

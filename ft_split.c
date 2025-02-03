/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:25:03 by anakin            #+#    #+#             */
/*   Updated: 2025/02/03 15:56:41 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

const char *get_word_index(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

int count_words(char const *s, char c)
{
	int count;
	int active;

	active = 0;
	count = 0;
	while (*s)
	{
		if (!active && *s != c)
		{
			active = 1;
			count++;
		}
		else if (active && *s == c)
			active = 0;
		s++;
	}
	return (count);
}

char *alloc_word(const char **s, char c)
{
	int i;
	char *arr;

	i = 0;
	while((*s)[i] != c && (*s)[i])
		i++;
	arr = (char *)malloc(sizeof(char ) * (i + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while ((*s)[i] != c && (*s)[i])
	{
		arr[i] = (*s)[i];
		i++;
	}
	arr[i] = '\0';
	*s += i;
	return (arr);
}

char **ft_split(char const *s, char c)
{
	char **arr;
	int words;
	int i;

	arr = (char **)malloc(sizeof(char *) * ((words = count_words(s, c)) + 1));
	if (!arr)
	return (NULL);
	i = 0;
	while (i < words)
	{
		s = get_word_index(s, c);
		arr[i] = alloc_word(&s, c);
		if (!arr[i])
		{
			while (i >= 0)
				free(arr[i--]);
			free(arr);
			return (NULL);
		}
		i++;
	}
	arr[words] = NULL;
	return (arr);
}

// int main(void)
// {
//     char **words = ft_split("  thisxisxaxtest!", 'x');

//     for (int i = 0; words[i]; i++)
//     {
//         printf("%s\n", words[i]);
//         free(words[i]);
//     }
//     free(words);
//     return (0);
// }

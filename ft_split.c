/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:25:03 by anakin            #+#    #+#             */
/*   Updated: 2025/02/05 15:32:11 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// splits a string into single words splitted by c
// the splitted words are terminated with '\0' and the 2d arrwith NULL
// return NULL if the allocation fails
// return the 2d array with the words if the sting was splitted succesfully

#include <stdlib.h>
#include <stdio.h>

static const char	*get_word_index(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static int	tcount_words(char const *s, char c)
{
	int	count;
	int	active;

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

static char	*alloc_word(const char **s, char c)
{
	int		i;
	char	*arr;

	i = 0;
	while ((*s)[i] != c && (*s)[i])
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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		words;
	int		i;

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
//     char **words = ft_split("hello this is a test for split. "
// 	"i hope this shit works. hate this function.", ' ');

//     for (int i = 0; words[i]; i++)
//     {
//         printf("%s\n", words[i]);
//         free(words[i]);
//     }
//     free(words);
//     return (0);
// }

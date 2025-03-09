/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 14:25:03 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// splits a string into single words splitted by c
// the splitted words are terminated with '\0' and the 2d arrwith NULL
// return NULL if the allocation fails
// return the 2d array with the words if the sting was splitted succesfully

#include "libft.h"

static void	ft_free_split(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static const char	*get_word_index(const char *s, char c)
{
	while (*s == c)
		s++;
	return (s);
}

static int	count_words(char const *s, char c)
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

	if (!s)
		return (NULL);
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
			ft_free_split(arr, i);
			return (NULL);
		}
		i++;
	}
	arr[words] = NULL;
	return (arr);
}

// #include <stdio.h>
// int main(void)
// {
//     char **words = ft_split(NULL, ' ');
// 	if (!words)
// 	{
// 		printf("can not allocate!!!\n");
// 		return (1);
// 	}
//     for (int i = 0; words[i]; i++)
//     {
//         printf("%s\n", words[i]);
//         free(words[i]);
//     }
//     free(words);
//     return (0);
// }

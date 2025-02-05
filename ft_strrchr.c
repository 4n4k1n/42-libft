/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:00:31 by anakin            #+#    #+#             */
/*   Updated: 2025/02/05 15:01:28 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// search for the last occurence of c in the string s
// returns the possiton of the character if found
// returns NULL if not found

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)&s[len]);
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
//	 char *arr;

//	 arr = ft_strrchr("xallo das ist ein test!", 'z');
//	 if (!arr)
//		 printf("character not found!\n");
//	 else
//		 printf("%s\n", arr);
//	 return (0);
// }

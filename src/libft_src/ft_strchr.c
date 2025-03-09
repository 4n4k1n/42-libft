/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strchr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anakin <anakin@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/01/04 21:27:47 by anakin			#+#	#+#			 */
/*   Updated: 2025/02/04 16:17:01 by anakin		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

// search for the first character c in the string s
// if found return the address of the possition
// if not found or the string is empty return NULL

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&(s[i]));
		i++;
	}
	if (s[i] == (char)c)
	{
		return ((char *)&(s[i]));
	}
	return (NULL);
}

// #include <stdio.h>
// int main (void)
// {
//	 char *arr;

// 	arr = ft_strchr("das ist ein test!", 'n');
// 	if (!arr)
// 		printf("Char not found!\n");
// 	else
// 		printf("%s\n", arr);
// 	return (0);
// }

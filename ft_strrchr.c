/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strrchr.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anakin <anakin@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/01/24 15:03:25 by anakin			#+#	#+#			 */
/*   Updated: 2025/01/24 15:34:50 by anakin		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

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

/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memchr.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anakin <anakin@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/01/24 15:57:34 by anakin			#+#	#+#			 */
/*   Updated: 2025/01/29 14:59:19 by anakin		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)((unsigned char *)s + i));
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//	 char *str = "this is a test!";
//	 char *dest;

//	 dest = ft_memchr(str, 'a', 9);
//	 if (!dest)
//		 printf("Not found!!!\n");
//	 else
//		 printf("%s\n", dest);
//	 return (0);
// }

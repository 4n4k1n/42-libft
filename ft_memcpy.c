/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memcpy.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anakin <anakin@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/01/24 11:37:18 by anakin			#+#	#+#			 */
/*   Updated: 2025/01/24 12:19:04 by anakin		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst || !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
//	 char *src = "test test";
//	 char dest[20];

//	 ft_memcpy(dest, src, 10);
//	 printf("%s\n", dest);
//	 return (0);
// }

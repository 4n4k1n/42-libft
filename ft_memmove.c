/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memmove.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anakin <anakin@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/01/24 12:53:42 by anakin			#+#	#+#			 */
/*   Updated: 2025/01/24 14:07:23 by anakin		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if ((unsigned char *)dst < (unsigned char *)src)
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	return (dst);
}

// int main(void)
// {
//	 char *src = "test test";
//	 char dest[20];

//	 ft_memmove(dest, src, 6);
//	 printf("%s\n", dest);
//	 return (0);
// }

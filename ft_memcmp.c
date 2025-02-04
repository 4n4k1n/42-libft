/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memcmp.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anakin <anakin@student.42.fr>			  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/01/29 15:08:57 by anakin			#+#	#+#			 */
/*   Updated: 2025/01/29 15:24:38 by anakin		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((((unsigned char *)s1)[i]) != (((unsigned char *)s2)[i]))
			return ((((unsigned char *)s1)[i]) - (((unsigned char *)s2)[i]));
		i++;
	}
	return (0);
}

// int main(void)
// {
//	 char *str1 = "test tesh!";
//	 char *str2 = "test teAt!";

//	 printf("%d\n", ft_memcmp(str1, str2, 0));
//	 return (0);
// }

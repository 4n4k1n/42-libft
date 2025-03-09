/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 14:24:32 by anakin            #+#    #+#             */
/*   Updated: 2025/03/09 13:47:19 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy source to dest to a given size
// returns the sousrce lenght

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	c_len;
	size_t	s_len;
	size_t	i;

	s_len = 0;
	while (src[s_len])
		s_len++;
	if (size == 0)
		return (s_len);
	if (size - 1 < s_len)
		c_len = size - 1;
	else
		c_len = s_len;
	i = 0;
	while (i < c_len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (s_len);
}

// int main(void)
// {
//	 char *src = "test test";
//	 char dest[20];

//	 printf("lne = %ld\nstr = %s\n", ft_strlcpy(dest, src, 6), dest);
//	 return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 11:50:58 by apregitz          #+#    #+#             */
/*   Updated: 2025/02/15 14:32:44 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compare two stings up to a given piossition n
// returns the ascii difference
// return 0 if n is 0

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && (s1[i] == s2[i]) && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_strncmp("testtest", "tesZtest", 11));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:32:50 by apregitz          #+#    #+#             */
/*   Updated: 2025/02/26 22:59:56 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compare two stings with each other
// untill the strings end or they are not the same anymore
// return the ascii difference

#include "../libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
int main(void)
{
	char str1[5] = "test";
	char str2[5] = "tesz";
	
	printf("%d", ft_strcmp(str1, str2));
	return (0);
} */

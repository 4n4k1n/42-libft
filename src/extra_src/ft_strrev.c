/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 11:32:46 by apregitz          #+#    #+#             */
/*   Updated: 2025/03/09 17:20:40 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *string)
{
	int		len;
	int		i;
	char	temp;

	len = 0;
	i = 0;
	while (string[len])
		len++;
	len--;
	while (len > i)
	{
		temp = string[i];
		string[i] = string[len];
		string[len] = temp;
		len--;
		i++;
	}
	return (string);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[10] = "test";
// 	strrev(str);
// 	printf("%s\n", strrev(str));
// 	return (0);
// }

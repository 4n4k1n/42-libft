/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:41:25 by anakin            #+#    #+#             */
/*   Updated: 2025/02/26 22:57:41 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is a alphabetical letter or a digit. else return 0

#include "../libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') \
	|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int c = 'a';

// 	printf("'%c' %s a letter / digit.\n", c, ft_isalnum(c) ? "is" : "is not");
// 	return (0);
// }

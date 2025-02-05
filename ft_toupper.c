/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:06:14 by anakin            #+#    #+#             */
/*   Updated: 2025/02/05 15:46:41 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes a character c
// if c si lower case it returns upper case
// else it returns c

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// #include <stdio.h>
// int main (void)
// {
// 	int ch = '!';

// 	printf("'%c' >> '%c'\n", ch, ft_toupper(ch));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:15:50 by anakin            #+#    #+#             */
/*   Updated: 2025/02/05 15:11:27 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// takes a character
// if c is upper case it returns lower case
// else it returns c

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// #include <stdio.h>
// int main (void)
// {
// 	int ch = 'G';

// 	printf("'%c' >> '%c'\n", ch, ft_tolower(ch));
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:55:48 by anakin            #+#    #+#             */
/*   Updated: 2025/02/05 15:41:43 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is a value in the ascii table (range 0 up to 127)
// esle return 0

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int c = '~';

// 	printf("'%c' %s a ascii.\n", c, ft_isascii(c) ? "is" : "is not");
// 	return (0);
// }

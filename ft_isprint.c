/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:01:18 by anakin            #+#    #+#             */
/*   Updated: 2025/02/05 15:42:11 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is a printable character. else return 0

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int c = 'g';

// 	printf("'%c' %s a printable.\n", c, ft_isprint(c) ? "is" : "is not");
// 	return (0);
// }

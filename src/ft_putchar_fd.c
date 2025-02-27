/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:22:30 by anakin            #+#    #+#             */
/*   Updated: 2025/02/26 22:59:21 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// print one character to a given output

#include "../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <stdio.h>
// int main(void)
// {
// 	ft_putchar_fd('X', 1);
// 	printf("\n");
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:46:07 by anakin            #+#    #+#             */
/*   Updated: 2025/02/05 15:43:38 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// print a string followed by a newline to a given output

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}

// int main(void)
// {
// 	ft_putendl_fd("this is a test!!!\n", 1);
// 	return (0);
// }

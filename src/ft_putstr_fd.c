/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 19:34:22 by anakin            #+#    #+#             */
/*   Updated: 2025/02/26 22:59:34 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// print a string to a given output

#include "../libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
}

// int main(void)
// {
// 	ft_putstr_fd("this is a test!!!\n", 1);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:55:48 by anakin            #+#    #+#             */
/*   Updated: 2025/01/05 15:23:06 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

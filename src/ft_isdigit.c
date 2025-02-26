/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:34:34 by anakin            #+#    #+#             */
/*   Updated: 2025/02/26 22:58:03 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is a digit. else return 0

#include "../libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int c = '!';

// 	printf("'%c' %s a digit.\n", c, ft_isalnum(c) ? "is" : "is not");
// 	return (0);
// }

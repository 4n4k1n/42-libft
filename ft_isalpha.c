/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 13:31:34 by anakin            #+#    #+#             */
/*   Updated: 2025/02/05 15:41:38 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return 1 if c is a alpabetical letter. else return 0

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	int c = 'A';

// 	printf("'%c' %s a letter.\n", c, ft_isalnum(c) ? "is" : "is not");
// 	return (0);
// }

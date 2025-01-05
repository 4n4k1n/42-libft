/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:06:14 by anakin            #+#    #+#             */
/*   Updated: 2025/01/05 15:18:23 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		return (ch - 32);
	return (ch);
}

// #include <stdio.h>
// int main (void)
// {
// 	int ch = '!';

// 	printf("'%c' >> '%c'\n", ch, ft_toupper(ch));
// 	return (0);
// }

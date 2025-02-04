/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anakin <anakin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 18:22:19 by anakin            #+#    #+#             */
/*   Updated: 2025/02/04 18:23:26 by anakin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(int n, long int	*temp)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	*temp = n;
	if (*temp < 0)
		*temp *= -1;
	while (*temp > 0)
	{
		len++;
		*temp /= 10;
	}
	return (len);
}

void	fill_arr(char **arr, int len, long int temp)
{
	(*arr)[len] = '\0';
	while (temp > 0)
	{
		(*arr)[--len] = '0' + (temp % 10);
		temp /= 10;
	}
}

char	*ft_itoa(int n)
{
	int			len;
	long int	temp;
	char		*arr;

	len = get_len(n, &temp);
	arr = (char *)malloc(sizeof(char) * (len + 1));
	if (!arr)
		return (NULL);
	if (n == 0)
	{
		arr[0] = '0';
		arr[1] = '\0';
		return (arr);
	}
	temp = n;
	if (temp < 0)
	{
		arr[0] = '-';
		temp *= -1;
	}
	fill_arr(&arr, len, temp);
	return (arr);
}

// int main(void)
// {
// 	char *str;

// 	str = ft_itoa(0);
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }

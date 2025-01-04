/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:05:29 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/30 13:21:35 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespaces(char *s, int num)
{
	if ((*s == ' ' || *s == '\n' || *s == '\t' || *s == '\r' \
	|| *s == '\v' || *s == '\f' || *s == '+') && num == 0)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	negativ;
	int	num;

	negativ = 1;
	num = 0;
	while (whitespaces(str, num))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negativ *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + ((*str - '0') * negativ);
		str++;
	}
	return (num);
}

/* #include <stdio.h>
int main()
{
    printf("%d\n", ft_atoi(" -2147483648"));
    return 0;
} */

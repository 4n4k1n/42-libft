/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 00:37:10 by apregitz          #+#    #+#             */
/*   Updated: 2024/11/19 16:08:07 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>  */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char str1[7] = "test";
	char str2[7] = "llllll";
	int i = 0;

	ft_strcpy(str2, str1);
	while (i < 7)
	{
		printf("%c", str2[i]);
		i++;
	}
	return (0);
} */

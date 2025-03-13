/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apregitz <apregitz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 17:19:22 by apregitz          #+#    #+#             */
/*   Updated: 2025/03/13 13:44:32 by apregitz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXTRA_H
# define EXTRA_H

# include <stdlib.h>
# include <unistd.h>

char	*ft_strrev(char *string);
char	*smash(const char **words, char seperator, size_t count);
int		ft_swp(void *arr1, void *arr2, size_t size);
ssize_t	ft_strclen(const char *str, char ch);

#endif
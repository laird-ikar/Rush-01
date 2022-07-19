/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:30:37 by bguyot            #+#    #+#             */
/*   Updated: 2022/07/19 16:50:14 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	ft_isspace(char c)
{
	return (c == ' '
		|| c == '\n'
		|| c == '\f'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v');
}

size_t	ft_strlen(const char *str)
{
	const char	*s;

	if (!str)
		return (0);
	s = str;
	while (*s)
		s++;
	return (s - str);
}

size_t	ft_arrlen(const void **arr)
{
	const void	**a;

	if (!arr)
		return (0);
	a = arr;
	while (*a)
		a++;
	return (a - arr);
}

void	ft_splitfree(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

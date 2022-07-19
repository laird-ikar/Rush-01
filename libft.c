/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:30:37 by bguyot            #+#    #+#             */
/*   Updated: 2022/07/19 16:00:42 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

size_t	ft_strlen(const char *str);

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
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

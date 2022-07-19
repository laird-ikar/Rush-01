/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:47:30 by bguyot            #+#    #+#             */
/*   Updated: 2022/07/19 16:49:10 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb <= -10)
			ft_putnbr(nb / -10);
		ft_putnbr((-1 * (nb % 10)) + '0');
	}
	else if (nb >= 10)
		ft_putnbr(nb / 10);
	if (nb >= 0)
		ft_putchar(nb % 10 + '0');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	if (!s)
		return ;
	write(1, s, ft_strlen(s));
}

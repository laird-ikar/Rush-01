/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:13:20 by bguyot            #+#    #+#             */
/*   Updated: 2022/07/19 16:07:03 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"
#include "functions.h"

int	main(int argc, char *argv[])
{
	t_data	data;

	if (argc != 2 || parse_arg(argv[1], &data) < 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	return (0);
}

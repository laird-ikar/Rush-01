/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:01:51 by bguyot            #+#    #+#             */
/*   Updated: 2022/07/19 16:35:07 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "structs.h"
#include "functions.h"

int	parse_arg(char *arg, t_data *data)
{
	char	**split;

	split = ft_split(arg, ' ');
	if (split == NULL || ft_arrlen((const void **) split) != 16)
		return (-1);
	data->colup[0] = ft_atoi(split[0]);
	data->colup[1] = ft_atoi(split[1]);
	data->colup[2] = ft_atoi(split[2]);
	data->colup[3] = ft_atoi(split[3]);
	data->coldown[0] = ft_atoi(split[4]);
	data->coldown[1] = ft_atoi(split[5]);
	data->coldown[2] = ft_atoi(split[6]);
	data->coldown[3] = ft_atoi(split[7]);
	data->rowleft[0] = ft_atoi(split[8]);
	data->rowleft[1] = ft_atoi(split[9]);
	data->rowleft[2] = ft_atoi(split[10]);
	data->rowleft[3] = ft_atoi(split[11]);
	data->rowright[0] = ft_atoi(split[12]);
	data->rowright[1] = ft_atoi(split[13]);
	data->rowright[2] = ft_atoi(split[14]);
	data->rowright[3] = ft_atoi(split[15]);
	return (0);
	(void) data; //TODO: remove
}

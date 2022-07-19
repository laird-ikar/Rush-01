/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:24:08 by bguyot            #+#    #+#             */
/*   Updated: 2022/07/19 15:56:24 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_data {
	int	colup[4];
	int	coldown[4];
	int	rowleft[4];
	int	rowright[4];
}	t_data;

#endif

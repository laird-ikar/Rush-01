/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:56:58 by bguyot            #+#    #+#             */
/*   Updated: 2022/07/19 16:08:25 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <stddef.h>
# include <stdlib.h>
# include "structs.h"

size_t	ft_strlen(const char *str);
void	ft_putstr(char *s);
int		parse_arg(char *arg, t_data *data);
char	**ft_split(const char *s, char c);

#endif

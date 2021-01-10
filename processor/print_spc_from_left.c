/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_spc_from_left.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 12:21:18 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/10 12:21:20 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void	print_spc_from_left(int *ct, int *j, t_spec *spec)
{
	char	spc;

	spc = define_spc_char(spec);
	if (spec->width != 0)
	{
		while (*j < spec->width)
		{
			ft_putchar(spc);
			(*ct)++;
			(*j)++;
		}
	}
}

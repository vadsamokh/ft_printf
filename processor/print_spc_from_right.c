/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_spc_from_right.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 12:21:28 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/10 12:21:30 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void	print_spc_from_right(int *ct, int *j, t_spec *spec, int len)
{
	char	spc;

	spc = define_spc_char(spec);
	if (spec->width != 0)
	{
		while (*j < (spec->width - len))
		{
			ft_putchar(spc);
			(*ct)++;
			(*j)++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:54:08 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/09 16:54:09 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void	conv_c(va_list args, int *ct, t_spec *spec)
{
	int		j;

	j = 0;
	if (spec->flag1 == 1)
	{
		ft_putchar((char)va_arg(args, int));
		(*ct)++;
		j++;
		print_spc_from_left(ct, &j, spec);
	}
	else
	{
		print_spc_from_right(ct, &j, spec, 1);
		ft_putchar((char)va_arg(args, int));
		(*ct)++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processor.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/09 16:27:52 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/09 16:27:54 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	processor(va_list args, int *ct, t_spec *spec)
{
	if (spec->conv == 'c')
		conv_c(args, ct, spec);
	if (spec->conv == 's')
		conv_s(args, ct, spec);
	if (spec->conv == 'p')
	{
		if (conv_p(args, ct, spec) == -1)
			return (-1);
	}
	if (spec->conv == 'u')
	{
		if (conv_u(args, ct, spec) == -1)
			return (-1);
	}
	if (spec->conv == 'd' || spec->conv == 'i')
	{
		if (conv_d_i(args, ct, spec) == -1)
			return (-1);
	}
	if (spec->conv == 'x' || spec->conv == 'X')
	{
		if (conv_x(args, ct, spec) == -1)
			return (-1);
	}
	return (0);
}

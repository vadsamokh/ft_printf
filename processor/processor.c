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

#include "../headers/ft_printf.h"

void	processor(va_list args, int *ct, t_spec *spec)
{
	if (spec->conv == 'c')
		conv_c(args, ct, spec);
	if (spec->conv == 's')
		conv_s(args, ct, spec);
	if (spec->conv == 'u')
		conv_u(args, ct, spec);
}

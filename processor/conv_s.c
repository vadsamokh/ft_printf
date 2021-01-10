/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 12:56:16 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/10 12:56:18 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void	conv_s(va_list args, int *ct, t_spec *spec)
{
	int		j;
	char	*str;
	int		len;

	j = 0;
	str = (char*)va_arg(args, long int);
	len = ft_min((int)ft_strlen(str), spec->precision);
	if (spec->flag1 == 1)
	{
		ft_putstr(str, spec);
		(*ct) = (*ct) + len;
		j = j + len;
		print_spc_from_left(ct, &j, spec);
	}
	else
	{
		print_spc_from_right(ct, &j, spec, len);
		ft_putstr(str, spec);
		(*ct) = (*ct) + len;
	}
}

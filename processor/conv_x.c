/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 16:22:31 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/16 16:22:34 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conv_x(va_list args, int *ct, t_spec *spec)
{
	int		j;
	char	*str;
	int		len;

	j = 0;
	str = ft_convert_to_hex(va_arg(args, unsigned int), spec);
	if (str == NULL)
		return (-1);
	len = ft_max((int)ft_strlen(str), spec->precision);
	if (spec->flag1 == 1)
	{
		ft_putnbr(str, spec, ct);
		(*ct) = (*ct) + len;
		j = j + len;
		print_spc_from_left(ct, &j, spec);
	}
	else
	{
		print_spc_from_right(ct, &j, spec, len);
		ft_putnbr(str, spec, ct);
		(*ct) = (*ct) + len;
	}
	free(str);
	return (0);
}

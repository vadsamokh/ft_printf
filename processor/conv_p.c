/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:19:57 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/16 14:20:05 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conv_p(va_list args, int *ct, t_spec *spec)
{
	int		j;
	char	*str;
	int		len;

	j = 0;
	str = ft_convert_to_hex((size_t)va_arg(args, void*), spec);
	if (str == NULL)
		return (-1);
	len = ft_min((int)ft_strlen(str), spec->precision);
	if (spec->flag1 == 1)
	{
		ft_putstr(str, spec);
		(*ct) = (*ct) + len + 2;
		j = j + len + 2;
		print_spc_from_left(ct, &j, spec);
	}
	else
	{
		print_spc_from_right(ct, &j, spec, len);
		ft_putstr(str, spec);
		(*ct) = (*ct) + len + 2;
	}
	free(str);
	return (0);
}

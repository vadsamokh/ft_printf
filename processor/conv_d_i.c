/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_d_i.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 14:50:59 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/16 14:51:01 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	conv_d_i(va_list args, int *ct, t_spec *spec)
{
	int		j;
	char	*str;
	int		len;

	j = 0;
	str = ft_itoa(va_arg(args, int));
	if (str == NULL)
		return (-1);
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
	free(str);
	return (0);
}

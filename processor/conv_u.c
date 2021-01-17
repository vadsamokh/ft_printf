/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv_u.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 14:57:32 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/10 14:57:33 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	conv_u(va_list args, int *ct, t_spec *spec)
{
	int		j;
	char	*str;
	int		len;

	j = 0;
	str = ft_itoa(va_arg(args, unsigned int));
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

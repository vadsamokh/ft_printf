/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:18:03 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/05 18:18:05 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	define_conv(char *s, size_t *i, t_spec *spec)
{
	spec->conv = s[*i];
	(*i)++;
	if ((spec->conv == 'd' || spec->conv == 'i' || spec->conv == 'o' ||
	spec->conv == 'u' || spec->conv == 'x' || spec->conv == 'X') &&
	(spec->precision != -1))
		spec->flag2 = 0;
}

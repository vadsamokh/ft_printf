/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_inner.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 16:30:03 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/05 16:30:05 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	parse_spec(char *s, va_list args, size_t *i, int *ct)
{
	t_spec *spec;

	spec = struct_init();
	if (spec == NULL)
		return (-1);
	if (s[*i] != '\0')
	{
		if (s[*i] == '%')
		{
			ft_putchar('%');
			(*i)++;
			(*ct)++;
		}
		else
		{
			define_flag(s, i, spec);
			define_width(s, args, i, spec);
			define_prec(s, args, i, spec);
			define_conv(s, i, spec);
			if (processor(args, ct, spec) == -1)
				return (-1);
		}
	}
	free(spec);
	return (0);
}

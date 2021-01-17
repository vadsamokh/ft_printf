/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 12:59:28 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/10 12:59:29 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, t_spec *spec)
{
	int	k;

	k = 0;
	if (spec->conv == 'p')
	{
		ft_putchar('0');
		ft_putchar('x');
	}
	while ((*s != '\0') && ((k < spec->precision) || (spec->precision < 0)))
	{
		ft_putchar(*s);
		s++;
		k++;
	}
}

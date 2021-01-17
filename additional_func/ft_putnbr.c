/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/17 16:26:42 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/17 16:26:43 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(char *s, t_spec *spec, int *ct)
{
	int	k;

	if (*s == '-')
	{
		ft_putchar('-');
		s++;
		(*ct)++;
	}
	k = (int)ft_strlen(s);
	while (k < spec->precision)
	{
		ft_putchar('0');
		k++;
	}
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctdigits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:40:06 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/16 15:40:11 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_ctdigits(unsigned int n)
{
	size_t	count;
	long	mul;

	count = 1;
	mul = 10;
	if (n < 0)
		count++;
	while ((n / mul) != 0)
	{
		count++;
		mul = mul * 10;
	}
	return (count);
}

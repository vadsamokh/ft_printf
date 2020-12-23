/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 14:46:22 by vbeech            #+#    #+#             */
/*   Updated: 2020/12/20 14:46:24 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;
	int		i;
	int		p;

	count = 0;
	i = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] != '%')
		{
			ft_putchar(s[i]);
			i++;
			count++;
		}
		else
		{
			p = parse(s, i + 1, args);
			if (p == -1)
				break ;
			i = i + p;
		}
	}
	va_end(args);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 16:44:32 by vbeech            #+#    #+#             */
/*   Updated: 2020/12/20 16:44:34 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

t_spec	specinit(void)
{
	t_spec	spec;

	spec.flag = 0;
	spec.width = 0;
	spec.precision = 0;
	spec.type = 0;
}

int		parse(char *s, int i, va_list args)
{
	t_spec	spec;
	int		count;
	char	*num;

	num = (char*)malloc(10);
	if (num == NULL)
		return (-1);
	count = 0;
	j = 0;
	if (s[i] == '%')
	{
		ft_putchar('%');
		return (2);
	}
	while (ft_isdigit(s[i]) == 1)
	{

	}
	return (count);
}

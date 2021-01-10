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

#include "../headers/ft_printf.h"

int		parse(char *s, va_list args)
{
	size_t	i;
	int		ct;

	i = 0;
	ct = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '%')
		{
			ft_putchar(s[i]);
			i++;
			ct++;
		}
		else
		{
			i++;
			if (parse_spec(s, args, &i, &ct) == -1)
				return (ct);
		}
	}
	return (ct);
}

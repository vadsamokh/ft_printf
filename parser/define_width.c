/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:19:06 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/05 17:19:08 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	define_width(char *s, va_list args, size_t *i, t_spec *spec)
{
	size_t	j;
	char	num[11];

	j = 0;
	if (s[*i] == '*')
	{
		spec->width = va_arg(args, int);
		(*i)++;
	}
	else
	{
		while (ft_isdigit(s[*i]) == 1)
		{
			num[j] = s[*i];
			(*i)++;
			j++;
		}
		num[j] = '\0';
		spec->width = ft_atoi(num);
	}
}

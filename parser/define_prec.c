/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_prec.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 18:10:09 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/05 18:10:10 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void	define_prec(char *s, va_list args, size_t *i, t_spec *spec)
{
	size_t	j;
	char	num[11];

	j = 0;
	if (s[*i] == '.')
	{
		(*i)++;
		if (s[*i] == '*')
		{
			spec->precision = va_arg(args, int);
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
			spec->precision = ft_atoi(num);
		}
	}
}

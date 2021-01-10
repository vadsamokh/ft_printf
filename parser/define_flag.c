/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_flag.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:15:20 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/05 17:15:22 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

void	define_flag(char *s, size_t *i, t_spec *spec)
{
	while (s[*i] == '-' || s[*i] == '0' || s[*i] == '#' || s[*i] == ' ' || s[*i]
	== '+')
	{
		if (s[*i] == '-')
			spec->flag1 = 1;
		else if (s[*i] == '0')
			spec->flag2 = 1;
		else if (s[*i] == '#')
			spec->flag3 = 1;
		else if (s[*i] == ' ')
			spec->flag4 = 1;
		else
			spec->flag5 = 1;
		(*i)++;
	}
}

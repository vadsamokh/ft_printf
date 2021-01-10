/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/05 17:01:30 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/05 17:01:32 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

t_spec	*struct_init(void)
{
	t_spec *spec;

	spec = (t_spec*)malloc(sizeof(t_spec));
	if (spec == NULL)
		return (NULL);
	spec->flag1 = 0;
	spec->flag2 = 0;
	spec->flag3 = 0;
	spec->flag4 = 0;
	spec->flag5 = 0;
	spec->width = 0;
	spec->precision = -1;
	spec->conv = 0;
	return (spec);
}

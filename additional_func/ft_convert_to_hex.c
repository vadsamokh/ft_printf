/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_to_hex.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:55:07 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/16 15:55:11 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

char	*ft_convert_to_hex(size_t n, t_spec *spec)
{
	char	*str;
	int		k;

	k = 0;
	str = (char*)malloc(sizeof(char) * (ft_ctdigits(n) + 1));
	if (str == NULL)
		return (NULL);
	while (n > 0)
	{
		str[k] = (n % 16) + 48;
		if (str[k] > 57)
		{
			if (spec->conv == 'x' || spec->conv == 'p')
				str[k] = str[k] + 39;
			else
				str[k] = str[k] + 7;
		}
		n = n / 16;
		k++;
	}
	str[k] = '\0';
	return (ft_strrev(str));
}

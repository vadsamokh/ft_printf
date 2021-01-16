/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:43:25 by vbeech            #+#    #+#             */
/*   Updated: 2021/01/16 15:43:27 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

char	*ft_strrev(char *s)
{
	size_t	len;
	size_t	k;
	char	buf;

	len = ft_strlen(s);
	k = 0;
	while (k < (len - 1 - k))
	{
		buf = s[k];
		s[k] = s[len - 1 - k];
		s[len - 1 - k] = buf;
		k++;
	}
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbeech <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/20 14:44:36 by vbeech            #+#    #+#             */
/*   Updated: 2020/12/20 14:44:38 by vbeech           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/libft.h"
# include <stdarg.h>

typedef struct	s_spec
{
	char	flag;
	int		width;
	int		precision;
	char	type;
}				t_spec;

int		ft_printf(const char *s, ...);
void	ft_putchar(char c);

#endif
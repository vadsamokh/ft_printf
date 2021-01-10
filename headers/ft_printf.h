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
	int			flag1;
	int			flag2;
	int			flag3;
	int			flag4;
	int			flag5;
	int			width;
	int			precision;
	char		conv;
}				t_spec;

int				ft_printf(const char *s, ...);
void			ft_putchar(char c);
void			ft_putstr(char *s, t_spec *spec);
int				ft_min(int a, int b);
int				parse(char *s, va_list args);
int				parse_spec(char *s, va_list args, size_t *i, int *ct);
t_spec			*struct_init(void);
void			define_flag(char *s, size_t *i, t_spec *spec);
void			define_width(char *s, va_list args, size_t *i, t_spec *spec);
void			define_prec(char *s, va_list args, size_t *i, t_spec *spec);
void			define_conv(char *s, size_t *i, t_spec *spec);
void			processor(va_list args, int *ct, t_spec *spec);
char			define_spc_char(t_spec *spec);
void			print_spc_from_left(int *ct, int *j, t_spec *spec);
void			print_spc_from_right(int *ct, int *j, t_spec *spec, int len);
void			conv_c(va_list args, int *ct, t_spec *spec);
void			conv_s(va_list args, int *ct, t_spec *spec);
void			conv_u(va_list args, int *ct, t_spec *spec);

#endif

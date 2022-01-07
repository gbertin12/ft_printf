/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 23:05:55 by gbertin           #+#    #+#             */
/*   Updated: 2022/01/07 10:30:32 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
int		ft_putchar(char c);
int		ft_is_type(char c);
int		ft_print_new_args(char c, va_list args);
int		ft_read_str(va_list args, const char *format);

int		ft_print_c(int c);
int		ft_print_s(char *str);
int		ft_print_d(int nb);
int		ft_print_x(unsigned int c);
int		ft_print_p(unsigned long long int nb);
int		ft_print_xx(unsigned int nb);
int		ft_print_u(unsigned int nb);

int		ft_count_hex(unsigned long long int nb);
int		ft_count_hexp(unsigned long long int nb);
#endif

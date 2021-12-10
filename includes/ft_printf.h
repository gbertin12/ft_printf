/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 23:05:55 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/10 08:40:02 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int     ft_putchar(char c);
int		ft_is_type(char c);
int		ft_print_new_args(char c, va_list args);
int		ft_read_str(va_list args, const char *format);

int		ft_print_c(int c);


#endif

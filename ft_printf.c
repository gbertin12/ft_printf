/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 08:22:36 by gbertin           #+#    #+#             */
/*   Updated: 2022/01/06 14:17:41 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_is_type(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = "%csdiupxX";
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_print_new_args(char c, va_list args)
{
	if (c == 'c')
		return (ft_print_c(va_arg(args, int)));
	if (c == 's')
		return (ft_print_s(va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_print_d(va_arg(args, int)));
	if (c == 'u')
		return (ft_print_u((unsigned int)va_arg(args, int)));
	if (c == 'x')
		return ((unsigned int)ft_print_x(va_arg(args, int)));
	if (c == 'p')
	{
		ft_putchar('0');
		ft_putchar('x');
		return (ft_print_p((unsigned long long int)va_arg(args, void *)) + 2);
	}
	if (c == 'X')
		return (ft_print_xx(va_arg(args, int)));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			nb_char;

	nb_char = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *format + 1)
		{
			format++;
			if (ft_is_type(*format))
				nb_char += ft_print_new_args(*format, args);
			else if (*format)
				nb_char += ft_putchar(*format);
		}
		else if (*format != '%')
			nb_char += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (nb_char);
}

int main()
{
	char    *g;
	//unsigned long long	int	g2 = 18446744073709551612ULL;

	// g ="une adresse";
	int		f;
	int 	x;
	f = printf("%x\n", 15);
	x = ft_printf("%x\n", 15);

	printf("mon printf : %d doit être égale à %d", x, f);
}

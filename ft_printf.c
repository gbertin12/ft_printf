/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 08:22:36 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/10 13:18:23 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"includes/ft_printf.h"
#include <stdio.h>
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int		ft_is_type(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = "c";
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_print_new_args(char c, va_list args)
{
	int nb_char;

	nb_char = 0;
	if (c == 'c')
		nb_char = ft_print_c(va_arg(args, int));
	// if (c == 's')
	// 	return (ft_print_s(args));
	// if (c == 'p')
	// 	return (ft_print_p(args));
	// if (c == 'd')
	// 	return (ft_print_d(args));
	// if (c == 'i')
	// 	return (ft_print_i(args));
	// if (c == 'u')
	// 	return (ft_print_u(args));
	// if (c == 'x')
	// 	return (ft_print_x(args));
	// if (c == 'X')
	// 	return (ft_print_xx(args));
	// if (c == '%')
	// 	return (ft_print_pourcentage(args));
	return (nb_char);
}

int     ft_printf(const char *format, ...)
{
	va_list 	args;
	int			nb_char;

	nb_char = 0;
	va_start(args, format);
	while(*format)
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
	return (nb_char + 1);
}

// compilation : clang ft_printf.c sources/ft_print_c.c libft/ft_strdup.c libft/ft_strlen.c
int main()
{
	char    g;
	int   s;
	char	g2;
	int		f;
	int 	x;

	 s = 123;
	g = 'g'; 
	g2 = 'z';
	f = printf("Vrai printf : %c puis %c\n", g2, g);
	x = ft_printf("Mon printf : %c puis %c\n", g2, g);

	printf("%d doit être égale à %d", x, f);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:13:39 by gbertin           #+#    #+#             */
/*   Updated: 2022/01/06 11:29:29 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_printf.h"

int	ft_count_hex(unsigned long long int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}

int	ft_print_x(unsigned int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_print_x(nb / 16);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base[nb]);
	return (ft_count_hex(nb));
}

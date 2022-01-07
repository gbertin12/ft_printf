/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:13:22 by gbertin           #+#    #+#             */
/*   Updated: 2022/01/07 10:31:02 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_printf.h"

int	ft_print_xx(unsigned int nb)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (nb >= 16)
	{
		ft_print_xx(nb / 16);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base[nb]);
	return (ft_count_hex(nb));
}

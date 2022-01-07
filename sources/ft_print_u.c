/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 09:33:42 by gbertin           #+#    #+#             */
/*   Updated: 2022/01/06 11:28:26 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_count_cu(unsigned int nb)
{
	int	nb_char;

	nb_char = 0;
	if (nb == 2147483647)
		return (10);
	if (nb < 0)
	{
		nb_char++;
		nb = -nb;
	}
	while (nb >= 10)
	{
		nb_char++;
		nb /= 10;
	}
	nb_char++;
	return (nb_char);
}

int	ft_print_u(unsigned int nb)
{
	if (nb >= 10)
	{
		ft_print_d(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else
		ft_putchar(nb + '0');
	return (ft_count_cu(nb));
}

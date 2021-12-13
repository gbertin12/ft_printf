/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 21:39:35 by gbertin           #+#    #+#             */
/*   Updated: 2021/12/09 22:15:35 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_printf.h"

int	ft_count_c(int nb)
{
	int	nb_char;

	nb_char = 0;
	if (nb == -2147483648)
		return(11);
	if (nb < 0)
	if (nb < 0)
	{
		nb_char++;
		nb = -nb;
	}
	while(nb > 10)
	{
		nb_char++;
		nb/=10;
	}
	nb_char++;
	return (nb_char);
}

int ft_print_d(int nb)
{
	if (nb == -2147483648)
		return(ft_print_s("-2147483648"));
	if (nb < 0)
	{
		ft_putchar('-');
		ft_print_d(-nb);
	}
	else if (nb >= 10)
	{ 
		ft_print_d(nb / 10);
		ft_putchar((nb % 10) + '0');
	}
	else 
		ft_putchar(nb +'0');
	return(ft_count_c(nb));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 22:15:23 by gbertin           #+#    #+#             */
/*   Updated: 2022/01/06 11:18:53 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../includes/ft_printf.h"

int	ft_count_hexp(unsigned long long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb /= 16;
		len++;
	}
	return (len);
}

int	ft_print_p(unsigned long long int nb)
{
	char	*base;

	base = "0123456789abcdef";
	if (nb >= 16)
	{
		ft_print_p(nb / 16);
		ft_putchar(base[nb % 16]);
	}
	else
		ft_putchar(base[nb]);
	return (ft_count_hexp(nb));
}

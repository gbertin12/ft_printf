/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 08:31:55 by gbertin           #+#    #+#             */
/*   Updated: 2021/11/25 09:33:24 by gbertin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new_memory;

	new_memory = malloc(size);
	if (new_memory)
	{
		ft_bzero(new_memory, size);
		return (new_memory);
	}
	return (NULL);
}

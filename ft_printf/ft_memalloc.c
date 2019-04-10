/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnarbert <mnarbert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 16:41:11 by mnarbert          #+#    #+#             */
/*   Updated: 2019/03/27 17:31:58 by mnarbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memalloc(size_t size)
{
	void			*temp;

	if (!(temp = (void*)malloc(size)))
		return (NULL);
	ft_bzero(temp, size);
	return ((void*)temp);
}

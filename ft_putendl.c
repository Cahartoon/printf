/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 19:40:21 by edinguim          #+#    #+#             */
/*   Updated: 2018/02/03 11:18:29 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putendl(const char *str)
{
	if (!str)
		return ;
	while (*str)
		ft_putchar(*str++);
	ft_putchar('\n');
}

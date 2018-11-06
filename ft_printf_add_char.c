/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_add_char.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/02 01:42:08 by edinguim          #+#    #+#             */
/*   Updated: 2018/02/10 12:08:46 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf_add_char(t_print *p, const char *fmt)
{
	p->result[p->buff_i] = fmt[p->fmt_i];
	p->buff_i++;
	p->result[p->buff_i] = '\0';
	p->fmt_i++;
	p->size++;
}

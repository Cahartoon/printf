/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:19:13 by edinguim          #+#    #+#             */
/*   Updated: 2018/02/03 10:55:28 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

char	*ft_strcpy(char *dest, const char *src)
{
	size_t	l;

	l = ft_strlen(src);
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest - l);
}

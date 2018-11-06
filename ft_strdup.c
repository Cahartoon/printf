/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 13:53:54 by edinguim          #+#    #+#             */
/*   Updated: 2018/02/06 11:09:15 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dup;

	if (s)
	{
		if (!(dup = ft_strnew(ft_strlen(s))))
			return (NULL);
		dup = ft_strcpy(dup, s);
		return (dup);
	}
	return (NULL);
}

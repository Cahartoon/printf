/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 00:27:02 by edinguim          #+#    #+#             */
/*   Updated: 2018/02/03 11:03:10 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;

	if (s1 && s2)
	{
		if (!(res = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
			return (NULL);
		res = ft_strcat(res, s1);
		res = ft_strcat(res, s2);
		return (res);
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:10:27 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:59 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

long	ft_strtol(const char *nptr, char **endptr, int base)
{
	long long	result;

	result = ft_strtoll(nptr, endptr, base);
	if (result > LONG_MAX)
	{
		return (LONG_MAX);
	}
	if (result < LONG_MIN)
	{
		return (LONG_MIN);
	}
	return ((long)result);
}

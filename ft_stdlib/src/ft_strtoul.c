/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 20:59:43 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:59 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

unsigned long	ft_strtoul(const char *nptr, char **endptr, int base)
{
	unsigned long	result;

	result = ft_strtoull(nptr, endptr, base);
	if (result > ULONG_MAX)
	{
		if (endptr)
			*endptr = (char *)nptr;
		return (ULONG_MAX);
	}
	return (result);
}

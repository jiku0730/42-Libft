/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lldiv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 16:56:09 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:59 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"

ft_lldiv_t	ft_lldiv(long long numer, long long denom)
{
	ft_lldiv_t	d;

	d.quot = numer / denom;
	d.rem = numer % denom;
	return (d);
}

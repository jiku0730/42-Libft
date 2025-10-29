/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bcopy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:15:01 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:59 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

void	ft_bcopy(const void *src, void *dst, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	if (src == NULL && dst == NULL)
		return ;
	if (n == 0)
		return ;
	s = (const unsigned char *)src;
	d = (unsigned char *)dst;
	if (s < d && s + n > d)
	{
		i = n;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	else
	{
		i = -1;
		while (++i < n)
			d[i] = s[i];
	}
}

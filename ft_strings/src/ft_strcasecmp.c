/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcasecmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:12:01 by kjikuhar          #+#    #+#             */
/*   Updated: 2025/10/29 22:50:59 by kjikuhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

static int	ft_tolower_local(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

int	ft_strcasecmp(const char *s1, const char *s2)
{
	unsigned char	c1;
	unsigned char	c2;

	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 == NULL)
		return (-1);
	if (s2 == NULL)
		return (1);
	while (*s1 || *s2)
	{
		c1 = (unsigned char)ft_tolower_local((unsigned char)*s1);
		c2 = (unsigned char)ft_tolower_local((unsigned char)*s2);
		if (c1 != c2)
			return (c1 - c2);
		if (*s1 == '\0')
			break ;
		s1++;
		s2++;
	}
	return (0);
}

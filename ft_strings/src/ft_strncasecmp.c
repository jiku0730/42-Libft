/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kjikuhar <kjikuhar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 19:45:43 by kjikuhar          #+#    #+#             */
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

int	ft_strncasecmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	c1;
	unsigned char	c2;
	size_t			i;

	if (n == 0)
		return (0);
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 == NULL)
		return (-1);
	if (s2 == NULL)
		return (1);
	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		c1 = (unsigned char)ft_tolower_local((unsigned char)s1[i]);
		c2 = (unsigned char)ft_tolower_local((unsigned char)s2[i]);
		if (c1 != c2)
			return (c1 - c2);
		if (s1[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
